//
// Created by Akshat on 01-02-2022.
//
#ifndef STRUCTURES_QUEUE_H
#define STRUCTURES_QUEUE_H
#include<iostream>
class Node{
public:
    int data;
    Node* next;
};
class Queue {
    Node* front;
    Node* Rear;
public:
    Queue();
    char* enqueue(int element);
    int dequeue();
};
#endif //STRUCTURES_QUEUE_H