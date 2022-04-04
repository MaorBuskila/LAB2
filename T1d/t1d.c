//
// Created by spl211 on 04/04/2022.
//

#include <stdio.h>
int main(int argc, char **argv) {

    int iarray[] = {1,2,3};
    char carray[] = {'a','b','c'};
    int* iarrayPtr = iarray;
    char* carrayPtr = carray;
    for (iarrayPtr; iarrayPtr < iarray + sizeof(iarray)/sizeof(*iarray); ++iarrayPtr) {
        printf("int is: %d\n address is: %p\n", *iarrayPtr , iarrayPtr);
    }
    for (carrayPtr; carrayPtr < carray + sizeof(carray)/sizeof(*carray); ++carrayPtr) {
        printf("char is: %c\n address is: %p\n", *carrayPtr ,carrayPtr );
    }
    int* p;
    printf("p is: %p\n", p);

}

//we can see that the local p (pointer) is on the heap