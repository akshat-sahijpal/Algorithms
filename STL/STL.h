//
// Created by Ghost on 04-09-2021.
//

#ifndef STRUCTURES_STL_H
#define STRUCTURES_STL_H
#include <vector>
#include <iterator>
template<typename t>
class Stl01{
public:
#if PASS_BY_VALUE == 0
    Stl01(const t& x, const t& y){}
#else
  Stl01(t x){

    }
#endif
};
#endif //STRUCTURES_STL_H
