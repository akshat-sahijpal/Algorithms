//
// Created by Akshat on 04-09-2021.
//

#ifndef STRUCTURES_MATRICES_H
#define STRUCTURES_MATRICES_H
#include <iostream>
#define RANGE(start, end) for(int i = start; i < end; i++)
class Matrices {
    int** currentMat;
public:
    Matrices();
    int** generateOneMatrix(int m, int n); // generates MXN matrix
};
#endif //STRUCTURES_MATRICES_H
