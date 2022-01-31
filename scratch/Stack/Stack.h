//
// Created by Akshat on 28-09-2021.
//

#ifndef STRUCTURES_STACK_H
#define STRUCTURES_STACK_H
#include <iostream>

// LIFO
class Node{
public:
    int data;
    Node* next;
};

class Stack{
    Node* top;
    int size;
public:
    Stack() {
        top = new Node();
        top->data = -1;
        top->next = nullptr;
    }
    void push(int value);
    int pop();
    int peek(int position);
    int Top();
    bool isEmpty();
    bool isFull();
};
#endif //STRUCTURES_STACK_H
