//
// Created by Carlos Aguilera on 3/5/20.
//

#include "hw05.h"

int main() {
    int *d, s;
    d = new int[5];
// i n i t i a l i z e ∗d
    s = Sum(d,5);
    delete [] d;
    return 0;
}