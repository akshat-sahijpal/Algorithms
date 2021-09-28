//
// Created by Ghost on 28-09-2021.
//

#include "Stack.h"

void Stack::push(int value) {
    Node *temp = new Node();
    temp->data = value;
    temp->next = this->top;
    this->top = temp;
    this->size++;
}

int Stack::pop() {
    if (top == NULL) {
        return -1;// Stack Underflow
    }
    Node *temp = new Node();
    temp = this->top;
    this->top = this->top->next;
    this->size--;
    int x = temp->data;
    delete temp;
    return x;
}

int Stack::peek(int position) {
    Node *p;
    if (this->size < position || this->top == NULL) {
        return -1;
    }
    p = this->top;
    for (int i = 0; i < position-1; ++i) {
        p = p->next;
    }//No p is on that particular position
    if(p!=NULL){
        return p->data;
    }
}

int Stack::Top() {
    if(this->top==NULL){
        return -1;
    }
    return this->top->data;
}

bool Stack::isEmpty() {
    if(this->top==NULL){
        return true;
    }
    return false;
}

bool Stack::isFull() {
    return false;
}