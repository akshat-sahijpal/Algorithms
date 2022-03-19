//
// Created by Akshat on 01-03-2022.
//
#ifndef STRUCTURES_BASICSTL_H
#define STRUCTURES_BASICSTL_H
#include <iostream>
#include <vector>
#include <array>
#include <deque> //  Doubly Ended Queue
#include <list>
#include <utility>      // std::pair
#include <stack>
#include <set>
#include <algorithm>
#include <queue>
#define p(x)  std::cout<< x << std::endl;
class BasicSTL{
public:
    void StlArray();
    void StlVector();
    void StlDeque(); // Doubly Ended Queue
    void StlList(); // Uses doubly linked list in the backend
    void StlStack();
    void StlQueue();
    /** PriorityQueue uses minHeap/maxHeap in the backend
        maxHeap: ParentNode is greater than the child node in the binary tree
        minHeap: ParentNode is lesser than the child node in the binary tree
     */
    void StlPriorityQueue();
    /**
     * Set stores only unique element
     * */
    void StlSet();

    void STL_ALGOS();
};
#endif //STRUCTURES_BASICSTL_H