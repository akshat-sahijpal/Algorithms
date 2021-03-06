//
// Created by Akshat on 02-09-2021.
//
#ifndef STRUCTURES_ADT_H
#define STRUCTURES_ADT_H
#include <iostream>
#include <memory>
#define RANGE(start, end) for(int i = start; i < end; i++)

class ADT {
    int size;
    int length;
    int *Array;
    char* strArr;
    int strSize;
    int strLength;
public:
    ADT(int size,
        int length,
        int *Array);
    void display();
    int* add(int element);
    void insertAt(int index, int element);
    void deleteAt(int index);
    int linearSearch(int element);
    int get(int index);
    int* getArray();
    bool inRange(int element);
    int max();
    int binSearch(int beg, int end, int mid, int element) ;
    int min();
    int* arrrev();
    int* lShift();
    int binarySearch (int element);
    int* lRotate();
    int* increaseArraySize(int newSize);
    auto multiDimensionalArray(int size);
    ADT(int size, int length, char *ray);
    void strlen();
    std::unique_ptr<int> addArr(int *i, int *j);
};

#endif //STRUCTURES_ADT_H