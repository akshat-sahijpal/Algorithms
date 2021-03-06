#include "AlgoImpl.h"

//
// Created by Akshat Sahijpal on 03/07/22.
//
void AlgoImpl::ADTimpl() {
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

void AlgoImpl::LinkedListImpl() {
    std::vector<int> a {1,2,3,4};
    auto* list = new LinkedList();
    list->insert(69);
    list->insert(40);
    std::cout <<list->getLength();
    list->showAll(list->generateLinkedListFromList(&a));
}

void AlgoImpl::PriorityQueue() {
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

void AlgoImpl::STL() {
    BasicSTL* basicStl = new BasicSTL();
    basicStl->StlQueue();
}

bool AlgoImpl::dictionary(int x) {
    std::map<int, int> m {
            {
                    1, 20
            },
            {
                    20, 30
            },
            {
                    300, 10
            }
    };
    for(std::pair<int,int> pt : m){
        if(pt.first==x){
            return 1;
        }
    }
    return 0;
}

void AlgoImpl::BinaryTree() {
    Btree* btree = new Btree();
/*    auto root = btree->constructRandomTree();
    if(btree->BFS_recur(root, "e")){
        std::cout << "Found " << std::endl;
    }*/
    auto tr = btree->generateIntTree();
    p(btree->minValTreeRecur(tr))
}

void AlgoImpl::DynamicProgramming() {
    FibMemoization* fib = new FibMemoization();
    std::map<int, int> a {};
    //p(fib->FibUnOptimized(5))
    p(fib->FibOptimizedMemoization(45, a))
}

void AlgoImpl::Graph() {
    Graphs* graphs = new Graphs();
    graphs->breadthFirstTraversalGraph(graphs->generateRandomGraph(), "a");
    graphs->depthFirstTraversalGraph(graphs->generateRandomGraph(), "a");
}

void AlgoImpl::Mapper() {

}
