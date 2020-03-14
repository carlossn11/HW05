//
// Created by Carlos Aguilera on 3/5/20.
//

#include "hw05.h"

int Sum(int A[5]) {
    int i;
    int sum = 0;
    for(i=0;i<5;++i) {
        sum += A[i]; // array itself is in the stack and the elements are in the heap
    }
    return sum;
}