#include <iostream>
#define print(x) std::cout << x << std::endl;
int* increaseArraySize(int *p, int currentSize, int newSize) {
    int *temp = new int[newSize];
    for(int i = 0; i < currentSize; i++){
        temp[i] = p[i];// Content Transfer
    }
    delete []p;
    p = temp;
    temp = nullptr;
    return p;
}
auto multiDimensionalArray(int size) {
    int* multi[size]; // Array of pointers
    for (int i = 0; i < size; ++i) {
        multi[i] = new int[size+3]; // 2D Array
    }
    return multi;
}
int main() {
    int *arr = (int *) malloc(5 * sizeof (int));
    for (int i = 0; i < 5; ++i) {
        arr[i] = 20;
    }
    int** mv = multiDimensionalArray(10);
    mv[0][0] = 32;
    print(mv[0][0])
    int *newArr = increaseArraySize(arr, 5, 10);
    newArr[5] = 43;
    newArr[6] = 343;

    print(newArr[5])
    print(newArr[6])
    return 0;
}
