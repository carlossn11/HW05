//
// Created by Carlos Aguilera on 3/5/20.
//

#include "hw05.h"

int main() {
    int *d, s;
    d = new int[5*8];
    if (!d) return -1;
    s = Sum(d,5,8);
    delete [] d; // ye s !
    return 0;
}
