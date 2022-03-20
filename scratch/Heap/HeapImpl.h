//
// Created by Akshat on 20-03-2022.
//

#ifndef STRUCTURES_HEAPIMPL_H
#define STRUCTURES_HEAPIMPL_H
#include<iostream>
#include<vector>
class HEAP {
    std::vector<int> heap;
    int heap_size;
    /**
     * @brief
     * Swaps two values based upon address
     * @param x
     * @param y
     */
    void swapper(int* x, int* y);
public:
    /**
     * @brief return the parent index of given child
     * @param child_idx
     * @return int
     */
    int parent_index(int child_idx);
    /**
     * @brief Returns left child Index
     * which is defined by 2i + 1
     * @param parent_index
     * @return int
     */
    int left_child_idx(int parent_index);
    /**
    * @brief Returns Right child Index
    *  which is defined by 2i + 2
    * @param parent_index
    * @return int
    */
    int right_child_idx(int parent_index);
    /**
     * @brief
     * @param index
     */
    void HeaifyMax(int index);
    /**
     * @brief
     * Creates a heap from an unsorted list
     * @param heap
     */
    void BuildMaxHeap(std::vector<int> heap);
    /**
     * @brief
     * return the max in the heap
     * @return float
     */
    float max();

};
#endif //STRUCTURES_HEAPIMPL_H
