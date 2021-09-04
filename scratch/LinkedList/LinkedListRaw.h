//
// Created by Ghost on 04-09-2021.
//

#ifndef STRUCTURES_LINKEDLISTRAW_H
#define STRUCTURES_LINKEDLISTRAW_H

#include <iostream>

#define print(x) std::cout<<x<<std::endl;

struct Node {
    int data;
    struct Node *nextLink;
};

class LinkedList {
    // when adding element to a list :Last increases
    struct Node *firstNode, *lastNode, *trav;
    int length;

public:
    LinkedList(int *initDataSet, int size) {
        this->firstNode = (struct Node *) malloc(sizeof(struct Node));
        this->lastNode = (struct Node *) malloc(sizeof(struct Node));
        this->trav = (struct Node *) malloc(sizeof(struct Node));
        this->firstNode->data = initDataSet[0];
        this->firstNode->nextLink = NULL;
        this->firstNode = this->lastNode;
        print(this->firstNode->data)
        for (int i = 0; i < size; ++i) {
            this->trav->data = initDataSet[i];
            this->trav->nextLink = NULL;
            this->lastNode->nextLink = this->trav;
            this->lastNode = this->trav;
            print(this->lastNode->data)
        }
        this->length=size-1;
    }
};

#endif //STRUCTURES_LINKEDLISTRAW_H