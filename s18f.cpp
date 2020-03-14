//
// Created by Carlos Aguilera on 3/5/20.
//

#include "hw05.h"

int Sum(int *A[], int r) {
    int j, k, sum = 0;
    for (j = 0; j < r; ++j) {
        for (k = 0; k < 8; ++k) {
            sum += A[j][k]; // o r
        } // ∗(d [ j ]+k )
    }
    return sum;
}