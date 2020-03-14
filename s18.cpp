//
// Created by Carlos Aguilera on 3/5/20.
//

#include "hw05.h"

int main() {
    int *d[5], s, i, j, k;
    for (i = 0; i < 5; ++i)
        d[i] = new int[8];
    for (j = 0; j < 5; ++j)
        for (k = 0; k < 8; ++k)
            *(d[j] + k) = j + k; // o r
    s = Sum(d, 5); //d [ j ] [ k]= j+k
    for (i = 0; i < 5; ++i)
        delete d[i];
}