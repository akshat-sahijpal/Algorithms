#include <iostream>
#include "ADT/ADT.h"
#define print(x) std::cout << x << std::endl;


int main() {
    int* arr = new int (5);
    for (int i = 0; i < 5; ++i) {
        arr[i] = i+23;
    }
    ADT *adt = new ADT(5, 5, arr);
    adt->display();
    adt->add(69);
    print(adt->getArray()[5]);
    return 0;
}
