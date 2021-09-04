//
// Created by Ghost on 04-09-2021.
//

#include "Matrices.h"

Matrices::Matrices() {}

int** Matrices::generateOneMatrix(int m, int n) {
    int **mat = (int **) malloc(m * sizeof(int));
    RANGE(0, m) {
        mat[i] = new int(n);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j){
            mat[i][j] = 1;
        }
    }
    this->currentMat = mat;
    return mat;
}