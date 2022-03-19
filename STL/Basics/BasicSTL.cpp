//
// Created by Akshat on 01-03-2022.
//

#include "BasicSTL.h"

void BasicSTL::StlArray() {
    std::array<int, 3> arr = {1, 2, 3};
    if (arr.at(0) == 1 && !arr.empty()) {
        arr.front() = 10;
        arr.back() = 69;
    }
    for (int i = 0; i < arr.size(); ++i) {
        p (arr.at(i))
    }
}

void BasicSTL::StlVector() {
    std::vector<int> vec = {1, 2, 3};
    p(vec.size())
    vec.clear();
    p(vec.size())
    vec.push_back(10); // Add An element
    vec.push_back(69); // Add An element
    vec.push_back(10); // Add An element
    vec.push_back(69); // Add An element
    vec.push_back(10); // Add An element
    vec.push_back(69); // Add An element
    p(vec.capacity())
    p(vec.size())
    for (std::vector<int>::iterator i = vec.begin(); i < vec.end(); i++) {
        p("element at: ")
        p(*i)
    }

}

/**
 * Stands for doubly ended queues:
 * Meaning insertion and deletion can take place from both front and back
 * insertion can be done from front as well as the back
 * deletion can be done from front as well as the back
 * */
void BasicSTL::StlDeque() {
    std::deque<int> dq;
    dq.push_back(69); // Inserts element at the last index
    dq.push_front(96); // Inserts element at the front side
    dq.push_front(20);
    dq.push_back(39); // Inserts element at the last index
    p(dq.front())
    p("All Elements in Doubly ended queue:=")
    for (std::deque<int>::iterator i = dq.begin(); i < dq.end(); ++i) {
        p (*i)
    }
    if (!dq.empty()) {
        dq.erase(dq.begin(), dq.begin() + 2);// Remove 2 elements
    }
}

/*
 * Uses doubly linked list
 * */
void BasicSTL::StlList() {
    std::list<int> l;
    l.push_front(10);
    l.push_front(201);
    l.push_front(210);
    l.push_back(122);
    for (auto i: l) {
        p(i)
    }
}

void BasicSTL::StlStack() {
    std::stack<int> stack;
    stack.push(12);
    stack.push(122);
    stack.push(1322);
    p(stack.top())
}

void BasicSTL::StlQueue() {
    std::queue<int> q;
    q.push(3023);
    q.push(2232);
    q.push(23232);
    q.push(223232);
    p(q.front())
    q.pop();
    p(q.front())
}

void BasicSTL::StlPriorityQueue() {
    std::priority_queue<int> maxHeap;
    maxHeap.push(200);
    maxHeap.push(2300);
    maxHeap.push(23600);
    maxHeap.push(23450);
    maxHeap.push(20460);
    int sizeOfMaxHeap = maxHeap.size();
    for (auto i = 0; i < sizeOfMaxHeap; i++) {
        std::cout << maxHeap.top() << std::endl;
        maxHeap.pop();
    }
    std::priority_queue<int, std::vector<int>, std::greater<int> > minHeap;
    minHeap.push(200);
    minHeap.push(2300);
    minHeap.push(23600);
    minHeap.push(23450);
    minHeap.push(20460);
    int sizeOfMinHeap = minHeap.size();
    for (auto i = 0; i < sizeOfMinHeap; i++) {
        std::cout << minHeap.top() << std::endl;
        minHeap.pop();
    }
}

void BasicSTL::StlSet() {
    std::set<int> nm;
    nm.insert(20023);
    nm.insert(28292);
    nm.insert(28932);
    nm.insert(28292);
    std::set<int>::iterator itr = nm.begin();
    while (itr != nm.end()) {
        itr++;
        std::cout << (*itr) << std::endl;
    }
}

void BasicSTL::STL_ALGOS() {
    std::vector<int> i{1, 2, 3, 5, 32};
    if (std::binary_search(i.begin(), i.end(), 32)) {
        std::cout << "Found " << std::endl;
    } else {
        std::cout << "Not Found" << std::endl;
    }
    // For Each for_each(start, end, function)
    std::for_each(i.begin(), i.end(), [](int n) {
        std::cout << n + 100000 << std::endl;
    });
    std::pair<int, int> m;
    m = std::make_pair(100, 30);
        m = std::make_pair(1003, 330);
    std::cout << m.first << m.second << std::endl;
}