//
// Created by Akshat on 03-09-2021.
//

#include "ArrayInstance.h"

int* ArrayInstance::newInstance(int size) {
    return new int [size];
}