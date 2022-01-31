#include <iostream>
#include "scratch/ADT/ADT.h"
#include "scratch/LinkedList/LinkedList.h"
#include "scratch/Matricies/Matrices.h"
#define print(x) std::cout << x << std::endl;
void ADTimpl() {
    int *arr = new int[] {1,2,3,4,5,6};
    ADT* adt = new ADT(5, 5, arr);
    adt->display();
    adt->add(69);
    adt->display();
    adt->insertAt(3, 69);
    adt->display();
    adt->deleteAt(3);
    adt->display();
    adt->lShift();
    adt->display();
    print(adt->binSearch(0, 5, 6/2, 3))
}
void LinkedListImpl() {
  auto* list = new LinkedList();
  int *set = new int [] {1,2,3,4,5,6};
    struct Node * List = list->init(set, 6);
    list->see(List, list->getLength());
}
int main() {//ADTimpl();
    LinkedListImpl();
    return 0;
}