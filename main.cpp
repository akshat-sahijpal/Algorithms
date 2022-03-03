#include <iostream>
#include "scratch/ADT/ADT.h"
#include "scratch/LinkedList/LinkedList.h"
#include "scratch/Priority Queue/PQueue.h"
#include "STL/Basics/BasicSTL.h"
#include <vector>
#include "scratch/Trees/BinaryTree/BinaryTree.h"
#define print(x) std::cout << x << std::endl;
void ADTimpl() {
    int *arr = new int[] {1,2,3,4,5,6};
    ADT* adt = new ADT(5, 5, arr);
    adt->display();
    adt->add(69);
    adt->display();
    adt->insertAt(3, 69);
    adt->display();
    adt->deleteAt(3);
    adt->display();
    adt->lShift();
    adt->display();
    print(adt->binSearch(0, 5, 6/2, 3))
}
void LinkedListImpl() {
  auto* list = new LinkedList();
  int *set = new int [] {1,2,3,4,5,6};
    struct Node * List = list->init(set, 6);
    list->see(List, list->getLength());
}
void PriorityQueue () {
    PQueue* pQueue = new PQueue();
    pQueue->enqueue(69, Priority::High);
    pQueue->enqueue(79, Priority::High);
    pQueue->enqueue(89, Priority::High);
    pQueue->enqueue(99, Priority::High);
    pQueue->enqueue(29, Priority::High);
    pQueue->enqueue(6931, Priority::Medium);
    pQueue->enqueue(7931, Priority::Medium);
    pQueue->enqueue(8931, Priority::Medium);
    pQueue->enqueue(9931, Priority::Medium);
    pQueue->enqueue(2931, Priority::Low);
    pQueue->enqueue(3212, Priority::Low);
    pQueue->enqueue(3121, Priority::Low);
    pQueue->enqueue(3271, Priority::Low);
    pQueue->enqueue(3241, Priority::Low);
    pQueue->enqueue(3211, Priority::Low);
    pQueue->watch();
}
void STL() {
    BasicSTL* basicStl = new BasicSTL();
    basicStl->StlList();
}
void BinaryTree(){
    Btree* btree = new Btree();
    auto root = btree->constructRandomTree();
    auto depthTravList = btree->DepthTraversal(root);
    p("Depth Traversed List:")
    for(std::vector<char*>::iterator itr = depthTravList.begin();
    itr < depthTravList.end(); itr++){
        p(*itr)
    }
    auto depthTravList2 = btree->RecurDepthTraversal(root);
    p("Depth Traversed List:")
    for(std::vector<char*>::iterator itr = depthTravList.begin();
    itr < depthTravList.end(); itr++){
        p(*itr)
    }
}
int main() {
    BinaryTree();
    return 0;
}