//
// Created by Akshat on 02-09-2021.
//

#include "ADT.h"

ADT::ADT(int size, int length, int *Array) : size(size), length(length), Array(Array) {}

void ADT::display() {
    std::cout << "\n";
    RANGE(0, this->length) {
        std::cout << "[" << i << "]" << " = " << this->Array[i] << std::endl;
    }
}

int *ADT::add(int element) {
    this->Array[this->length++] = element;
    return this->Array;
}

/**
 * Insert Element at a particular index
 * */
void ADT::insertAt(int index, int element) {
    if (index > this->length) return;
    for (int i = this->length; i > index; i--) {
        this->Array[i] = this->Array[i - 1];
    }
    this->Array[index] = element;
    this->length++;
}

void ADT::deleteAt(int index) {
    RANGE(index, this->length - 1) {
        this->Array[i] = this->Array[i + 1];
    }
    length--;
}

// TC: O(n)
int ADT::linearSearch(int element) {
    RANGE(0, this->length) {
        if (this->Array[i] == element) {
            return i;
        }
    }
}

int ADT::get(int index) {
    if (inRange(index)) { return this->Array[index]; }
}

bool ADT::inRange(int index) {
    if (index > 0 && index < this->length) return true;
    return false;
}

int *ADT::getArray() {
    return this->Array;
}

int ADT::max() {
    int Max = this->Array[0];
    RANGE(0, this->length) {
        if (Max < this->Array[i]) {
            Max = this->Array[i];
        }
    }
    return Max;
}

int ADT::min() {
    int Min = this->Array[0];
    RANGE(0, this->length) {
        if (Min > this->Array[i]) {
            Min = this->Array[i];
        }
    }
    return Min;
}

// Reverses the array
int *ADT::arrrev() {
    int *B = new int[this->length];
    for (int i = this->length, j = 0; i > 0; i--, j++) {
        B[j] = this->Array[i];
    }// Transfer content
    RANGE(0, this->length) {
        this->Array[i] = B[i];
    }
    return this->Array;
}

int *ADT::lRotate() {// Left Rotate
    int first = this->Array[0];
    RANGE(0, this->length) {
        this->Array[i] = this->Array[i + 1];
    }
    this->Array[length - 1] = first;
}

int *ADT::lShift() {//Left Shift Operation
    RANGE(0, this->length) {
        this->Array[i] = this->Array[i + 1];
    }
    this->length--;
    return this->Array;
}

int *ADT::increaseArraySize(int newSize) {
    int *temp = new int[newSize];
    RANGE(0, this->length) {
        temp[i] = this->Array[i];// Content Transfer
    }
    delete[]this->Array;
    this->Array = temp;
    temp = nullptr;
    return this->Array;
}

auto ADT::multiDimensionalArray(int size) {
    int *multi[size]; // Array of pointers
    RANGE(0, size) {
        multi[i] = new int[size + 3]; // 2D Array
    }
    return multi;
}

ADT::ADT(int size, int length, char *ray) {
    RANGE (0, size) {
        this->strArr[i] = ray[i];
    }
}

int ADT::binSearch(int beg, int end, int mid, int element) {
    mid = beg + end / 2;
    if(element == this->Array[mid])  return mid;
    else if(element < this->Array[mid]) return binSearch(beg, mid - 1, mid, element);
    else if (element > this->Array[mid]) return binSearch(mid + 1, end, mid, element);
}

int ADT::binarySearch(int element) {
    int beg = 0, end = this->length-1;
    for (int i = 0; i < this->length; i++) {
        int midpoint = beg + end / 2;
        if (element < this->Array[midpoint]) {
            end = midpoint - 1;
        } else if (element > this->Array[midpoint]) {
            beg = midpoint + 1;
        }
        if(element == this->Array[midpoint]){
            return midpoint;
        }
    }
}
