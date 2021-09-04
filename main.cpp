#include <iostream>
#include "scratch/ADT/ADT.h"
#include "scratch/Matricies/Matrices.h"

#define print(x) std::cout << x << std::endl;


int main() {
    int *arr = new int(5);

    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 23;
    }
    ADT *adt = new ADT(5, 5, arr);
    adt->display();
    adt->add(69);
    print(adt->getArray()[5])
    print("\n\n")
    Matrices mat;
    int m = 4, n = 4;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << mat.generateOneMatrix(m, n)[i][j] ;
        }
        std::cout << "\n";
    }
    return 0;
}
