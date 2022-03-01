//
// Created by Akshat on 01-03-2022.
//

#ifndef STRUCTURES_RECURRENCERELATION_H
#define STRUCTURES_RECURRENCERELATION_H
class Recurrence{
public:
    void TailRecur(int n);
    void HeadRecur(int n);
    void TreeRecur(int n);
    void indirectRecur(int n);
    int sum(int n);
    int factorial(int n);
    int power(int m, int n);
    int taylor(int x, int n);
};
#endif //STRUCTURES_RECURRENCERELATION_H