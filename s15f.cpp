//
// Created by Carlos Aguilera on 3/5/20.
//

#include "hw05.h"

int Sum(int *p, int k) {
    int i;
    int sum = 0;
    for(i=0;i<k;++i) {
        sum += *(p+i);
    }
    return sum;
}