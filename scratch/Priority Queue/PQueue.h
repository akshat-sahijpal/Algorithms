//
// Created by Akshat on 03-02-2022.
//

#ifndef STRUCTURES_PQUEUE_H
#define STRUCTURES_PQUEUE_H
enum Priority{
    High,
    Medium,
    Low
};
class Node1{
public:
    int data;
    Node1* next;
    Priority priority;
};
class PQueue {
    Node1* LowFront;
    Node1* LowRear;
    Node1* MediumFront;
    Node1* MediumRear;
    Node1* HighFront;
    Node1* HighRear;
public:
    PQueue();
    void enqueue(int element, Priority priority);
    int dequeue();
    void watch();
};

#endif //STRUCTURES_PQUEUE_H
