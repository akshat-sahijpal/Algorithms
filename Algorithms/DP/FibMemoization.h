//
// Created by Akshat on 08-03-2022.
//
/**
 * Dynamic Programming: reusing Overlapping sub-problems
 * Memoization: Store Subproblems
 * */
#ifndef STRUCTURES_FIBMEMOIZATION_H
#define STRUCTURES_FIBMEMOIZATION_H
#include <map>
#include<iostream>
class FibMemoization{
public:
    int FibUnOptimized(int n){
        if(n <= 2) return 1;
        return FibUnOptimized(n-1) + FibUnOptimized(n-2);
    }
    /**
     * Memoization: Cache the results to use them later on
     * */
    int FibOptimizedMemoization(int n, std::map<int, int> memo){
        if(memo.find(n) == memo.end()) return memo[n];
        if(n <= 2) return 1;
        memo[n] = FibOptimizedMemoization(n-1, memo) + FibOptimizedMemoization(n-2, memo);
        return memo[n];
    }
};
#endif //STRUCTURES_FIBMEMOIZATION_H