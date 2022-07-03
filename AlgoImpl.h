//
// Created by Akshat Sahijpal on 03/07/22.
//

#ifndef STRUCTURES_ALGOIMPL_H
#define STRUCTURES_ALGOIMPL_H
#include <iostream>
#include "scratch/ADT/ADT.h"
#include "scratch/LinkedList/LinkedList.h"
#include "scratch/Priority Queue/PQueue.h"
#include "STL/Basics/BasicSTL.h"
#include <vector>
#include <map>
#include "scratch/Trees/BinaryTree/BinaryTree.h"
#include "Algorithms/DP/FibMemoization.h"
#include "scratch/Graphs/Graphs.h"
using namespace std;
#define print(x) std::cout << x << std::endl;
class AlgoImpl {
public:
    void ADTimpl();
    void LinkedListImpl();
    void PriorityQueue ();
    void STL();
    bool dictionary(int x);
    void BinaryTree();
    void DynamicProgramming();
    void Graph();
    void Mapper();
};
#endif //STRUCTURES_ALGOIMPL_H
