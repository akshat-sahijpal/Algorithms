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
#include <stack>
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
    void StlPriorityQueue();
};
#endif //STRUCTURES_BASICSTL_H
