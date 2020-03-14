//
// Created by Carlos Aguilera on 3/5/20.
//

#include "hw05.h"

int main() {
    int **d, s, i;
    d = new int*[5];
    for(i=0;i<5;++i)
        d[i] = new int[8];
    s = Sum(d,5,8);
    for(i=0;i<5;++i)
        delete [] d[i];
    delete [] d;
}