//
// Created by Ghost on 02-09-2021.
//
#ifndef STRUCTURES_ADT_H
#define STRUCTURES_ADT_H
#include <iostream>
class ADT {
    int size;
    int length;
    int *Array;
public:
    ADT(int size,
        int length,
        int *Array);
    void display();
    void add(int element);
    ~ADT();
};

#endif //STRUCTURES_ADT_H