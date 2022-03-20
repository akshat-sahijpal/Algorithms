#include "HeapImpl.h"

//
// Created by Akshat on 20-03-2022.
//
void HEAP::swapper(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int HEAP::parent_index(int child_idx) {
    if (child_idx>0){
        return (int) (child_idx-1)/2;
    }
    return -1;
}

int HEAP::left_child_idx(int parent_index) {
    int left_child = 2 * parent_index + 1;
    if (left_child<this->heap_size){
        return left_child;
    }
    return -1;
}

int HEAP::right_child_idx(int parent_index) {
    int right_child = 2 * parent_index + 2;
    if (right_child<this->heap_size){
        return right_child;
    }
    return -1;
}

void HEAP::HeaifyMax(int index) {
    if (index < this->heap_size){
        int parent_index = index;
        int l = left_child_idx(index);
        int r = right_child_idx(index);
        if (l != NULL && this->heap[l]>this->heap[parent_index]){
            parent_index = l;
        }
        if (r != NULL && this->heap[r]>this->heap[parent_index]){
            parent_index = r;
        }
        if (parent_index != index){
            swapper(&this->heap[parent_index], &this->heap[index]);
            HeaifyMax(parent_index);
        }
    }
}

void HEAP::BuildMaxHeap(std::vector<int> heap) {
    this->heap = heap;
    heap_size = heap.size();
    if(heap_size>1){
        for (auto i : heap){
            HeaifyMax(i);
        }
    }
}

float HEAP::max() {
    if (heap_size >= 1)
        return heap[0];
    return -1;
}
