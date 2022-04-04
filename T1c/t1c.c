//
// Created by spl211 on 04/04/2022.
//
#include <stdio.h>
int main(int argc, char **argv) {
    int iarray[3];
    int iarray2[3];
    float farray[3];
    double darray[3];
    char carray[3];


    printf("- &iarray: %p\n",&iarray);
    printf("- &iarray + 1: %p\n",&iarray+1);
    long dist1 = &iarray+1 - &iarray ;
    printf("- &iarray+1 - &iarray: %p\n" ,dist1);

    printf("- &farray: %p\n",&farray);
    printf("- &farray + 1: %p\n",&farray+1);

    printf("- &darray: %p\n",&darray);
    printf("- &darray + 1: %p\n",&darray+1);

    printf("- &carray: %p\n",&carray);
    printf("- &carray + 1: %p\n",&carray+1);


}

// the behavior of the +1 is shoiwng the next free empty space in the memmory, for example iarray is at 0x7ffea8711e78 and becuase iarray initilze with 3 int
// its take 3*4 bytes  = 12 bytes like is showing in the address
