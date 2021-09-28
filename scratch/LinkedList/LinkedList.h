//
// Created by Ghost on 06-09-2021.
//

#ifndef STRUCTURES_LINKEDLIST_H
#define STRUCTURES_LINKEDLIST_H

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
    LinkedList();

    struct Node *init(int *initDataSet, int size);

    void insert(int element);

    int getLength();

    void see();

    int peek();

    void deleteAtFirst();

    void deleteAtIndex(int index);

    void showAll(struct Node *p);

    int sum();

    int max(struct Node *nod);

    // Linear Search
    struct Node *findElement(struct Node *crNode, int element);

    struct Node *findElementAtIndex(int index);

    void insertAtStart(int element);

    void insertAtIndex(int index, int element);

    struct Node *reverseData();

     struct Node* reverseLinkedListElements(Node* list, int size);

    struct Node* reverseLinkedListLinks(Node* list, int size);

    struct Node* reverseUsingRecursion(Node *q, Node *p);
};

#endif //STRUCTURES_LINKEDLIST_H