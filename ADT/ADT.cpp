//
// Created by Ghost on 02-09-2021.
//

#include "ADT.h"

ADT::ADT(int size, int length, int *Array) {
    this->size = size;
    this->length = length;
    this->Array = Array;
}

void ADT::display() {
    for (int i = 0; i < this->size; ++i) {
        std::cout << "[" << i << "]" << " = " << this->Array[i] << std::endl;
    }
}

int* ADT::add(int element) {
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
    for (int i = index; i < length - 1; ++i) {
        this->Array[i] = this->Array[i + 1];
    }
    length--;
}

// TC: O(n)
int ADT::linearSearch(int element) {
    for (int i = 0; i < this->length; ++i) {
        if(this->Array[i] == element){
            return i;
        }
    }
}
int ADT::get(int index) {
   if(inRange(index)) { return this->Array[index]; }
}

bool ADT::inRange(int index) {
    if(index > 0 && index < this->length) return true;
    return false;
}
int* ADT::getArray() {
   return this->Array;
}
int ADT::max() {
    int Max = this->Array[0];
    for (int i = 0; i < this->length; ++i) {
        if(Max < this->Array[i]){
            Max = this->Array[i];
        }
    }
    return Max;
}
int ADT::min() {
    int Min = this->Array[0];
    for (int i = 0; i < this->length; ++i) {
        if(Min > this->Array[i]){
            Min = this->Array[i];
        }
    }
    return Min;
}
// Reverses the array
int* ADT::arrrev() {
    int* B = new int [this->length];
    for (int i = this->length, j = 0; i > 0 ; i--, j++) {
        B[j] = this->Array[i];
    }// Transfer content
    for (int i = 0; i < this->length; ++i) {
        this->Array[i] = B[i];
    }
    return this->Array;
}

int* ADT::lRotate() {// Left Rotate
    int first = this->Array[0];
    for (int i = 0; i < this->length; ++i) {
        this->Array[i] = this->Array[i+1];
    }
    this->Array[length-1] = first;
}
int* ADT::lShift() {//Left Shift Operation
    for (int i = 0; i < this->length; ++i) {
        this->Array[i] = this->Array[i+1];
    }
    this->length--;
    return this->Array;
}

int* ADT::increaseArraySize(int newSize) {
    int *temp = new int[newSize];
    for(int i = 0; i < this->length; i++){
        temp[i] = this->Array[i];// Content Transfer
    }
    delete []this->Array;
    this->Array = temp;
    temp = nullptr;
    return this->Array;
}
/* int** mv = multiDimensionalArray(10);
    mv[0][0] = 32;
    print(mv[0][0])
    int *newArr = increaseArraySize(arr, 5, 10);
    newArr[5] = 43;
    newArr[6] = 343;
   */
auto ADT::multiDimensionalArray(int size) {
    int* multi[size]; // Array of pointers
    for (int i = 0; i < size; ++i) {
        multi[i] = new int[size+3]; // 2D Array
    }
    return multi;
}

ADT::ADT(int size, int length, char *ray) {

}