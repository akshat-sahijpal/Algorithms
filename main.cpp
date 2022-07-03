#include <iostream>
#include "AlgoImpl.h"

using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    auto* algos = new AlgoImpl();
    algos->DynamicProgramming();
    algos->ADTimpl();
    algos->BinaryTree();
    algos->Graph();
    algos->LinkedListImpl();
    algos->PriorityQueue();
    algos->STL();
    return 0;
}