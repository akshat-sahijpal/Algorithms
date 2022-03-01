//
// Created by Akshat on 01-03-2022.
//
#include "RecurrenceRelation.h"
#include <iostream>
#define print(x) std::cout << x << std::endl;
//Linear Recur
void Recurrence::TailRecur(int n) {
    if(n>0) {
       print(n)// Called during Calling time
        TailRecur(n-1);
    }
}
//Linear Recur
void Recurrence::HeadRecur(int n) {
    if(n>0) {
        HeadRecur(n-1);
        print(n)// Called during Returning time
    }
}

void Recurrence::TreeRecur(int n) {
    if(n>0) {
        print(n)
        TreeRecur(n-1);
        TreeRecur(n-1);
    }
}

int Recurrence::sum(int n) {
    if(n == 0) return 0;
    return sum(n-1) + n;
}

int Recurrence::factorial(int n) {
    if (n == 0) return 1;
    return factorial(n-1) * n;
}

// m ^ n
int Recurrence::power(int m, int n) {
    if(n==0) return 1;
    return power(m, n-1) * m;
}

int Recurrence::taylor(int x, int n) {
    static int fact = 1;
    static int power = 1;
    int res;
    if (n == 0) return 1;
    res = taylor(x, n-1);
    power = power * x;
    fact = fact * n;
    return res + power / fact;
}
int Recurrence::fib(int n) {
    if(n <= 1) return n;
    return fib(n-2) + fib(n-1);
}
