#include <iostream>
#include "scratch/ADT/ADT.h"
#include "scratch/Matricies/Matrices.h"
#include "scratch/LinkedList/LinkedListRaw.h"

#define print(x) std::cout << x << std::endl;

int main() { 
    int* x = new int(3);
    x[0] = 132;
    x[1] = 22;
    x[2] = 43;
    LinkedList *i = new LinkedList(x, 3);
    for (int j = 0; j < 10; j++)
    {
        i->insert(69+j);   
    } 
    print("Printing the full list: ")
    i->see();

    return 0;
}
