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
    /* LinkedList() {
         this->firstNode = (struct Node *) alloca(sizeof(struct Node));
         this->lastNode = (struct Node *) alloca(sizeof(struct Node));
         this->trav = (struct Node *) alloca(sizeof(struct Node));
         this->firstNode->data = initDataSet[0];
         this->firstNode->nextLink = NULL;
         this->firstNode = this->lastNode;
         print(this->firstNode->data)
         for (int i = 0; i < size; ++i) {
             this->trav->data = initDataSet[i];
             this->trav->nextLink = NULL;
             this->lastNode->nextLink = this->trav;
             this->lastNode = this->trav;// trav is the last node since it is added finally
             print(this->lastNode->data)
         }
         this->length = size;
         return this->firstNode;
     }*/
    struct Node *init(int *initDataSet, int size) {
        this->firstNode = (struct Node *) malloc(sizeof(struct Node));
        this->lastNode = (struct Node *) malloc(sizeof(struct Node));
        this->trav = (struct Node *) malloc(sizeof(struct Node));
        this->firstNode->data = initDataSet[0];
        this->firstNode->nextLink = NULL;
        this->firstNode = this->lastNode;
        for (int i = 0; i < size; ++i) {
            insert(initDataSet[i]);
        }
        this->length = size;
        return this->firstNode;
    }

    void insert(int element) {
        auto temp = (struct Node *) malloc(sizeof(struct Node));
        temp->data = element;
        temp->nextLink = NULL;
        this->lastNode->nextLink = temp;
        this->lastNode = temp;
        this->length++;
    }

    int getLength() {
        return this->length;
    }

    void see() {
        auto temp = this->firstNode;
        for (int i = 0; i < this->length; i++) {
            print(temp->data)
            temp = temp->nextLink;
        }
    }

    int peek() {
        return this->firstNode->data;
    }

    void deleteAtFirst() {
        auto first = this->firstNode;
        this->firstNode = this->firstNode->nextLink;
        delete[] first;
    }
    void deleteAtIndex(int index) {
        auto cont = this->firstNode;
        if (index > this->length) return;
        for (int i = 0; i < this->length; i++) {
            if (i == index) {
                auto del = cont->nextLink;

            }
            cont = cont->nextLink;
        }
    }

    void showAll(struct Node *p) {
        if (p != NULL) {
            print(p->data)
            showAll(p->nextLink);
        }
    }

    int sum() {
        auto firstNode = this->firstNode;
        int counter = 0;
        while (firstNode != NULL) {
            counter += firstNode->data;
            firstNode = firstNode->nextLink;
        }
        return counter;
    }

    int max(struct Node *nod) {
        auto firstNode = nod;
        int Max = firstNode->data;
        print(Max)
        while (firstNode != NULL) {
            if (firstNode->data > Max) {
                Max = firstNode->data;
            }

            firstNode = firstNode->nextLink;
        }

        return Max;
    }

    // Linear Search
    struct Node *findElement(struct Node *crNode, int element) {
        if (crNode == NULL) return NULL;
        else if (crNode->data == element) return crNode;
        return findElement(crNode->nextLink, element);
    }

    struct Node *findElementAtIndex(int index) {
        auto firstNode = this->firstNode;
        for (int i = 0; i < this->length; ++i) {
            if (i == index) {
                return firstNode;
            }
            this->firstNode = this->firstNode->nextLink;
        }
    }

    void insertAtStart(int element) {
        auto temp = (struct Node *) malloc(sizeof(struct Node));
        temp->data = element;
        temp->nextLink = this->firstNode;
        this->firstNode = temp;
    }

    void insertAtIndex(int index, int element) {
        auto temp = (struct Node *) malloc(sizeof(struct Node));
        temp->data = element;
        auto post = findElementAtIndex(index);
        temp->nextLink = post->nextLink;
        post->nextLink = temp;
    }
};

#endif //STRUCTURES_LINKEDLISTRAW_H