//
// Created by Akshat on 01-02-2022.
//

#include "Queue.h"

Queue::Queue() {
    this->Rear = nullptr;
    this->front = NULL;// Empty in the start
}

char* Queue::enqueue(int element) {
    Node* temp = new Node();
    if(temp == NULL){
        return "Queue Full!!";
    }
    temp->data = element;
    temp->next = nullptr;
    // In starting when front = rear
    if(this->front == nullptr){
        this->front = this->Rear;
        return "Element Added!!";
    }
    else {
        // whatever rear is pointing to is the last node so connect last nodes next to the temp node
        this->Rear->next = temp;
        // Now the temp node is the rear node
        this->Rear = temp;
        return "Element Added!!";
    }
}

int Queue::dequeue() {
    // dequeue is done from the front
    if(this->front == NULL) std::exit(0);
    Node* temp = this->front;
    this->front = this->front->next;
    int element = temp->data;
    free(temp);
    return element;
}

