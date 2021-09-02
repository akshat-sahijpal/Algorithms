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
        std::cout<< this->Array[i];
    }
}
void ADT::add(int element) {
    this->Array[this->length++] = element;
}
ADT::~ADT() {
    delete this->Array;
}