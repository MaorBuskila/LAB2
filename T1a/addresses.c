#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int addr5;
int addr6;

int foo();
void point_at(void *p);
void foo1();
void foo2();

int main (int argc, char** argv){
    int addr2;
    int addr3;
    char* yos="ree";
    int * addr4 = (int*)(malloc(50));
    printf("- &addr2: %p\n",&addr2); //Stack (Refe
    printf("- &addr3: %p\n",&addr3); //Stack
    printf("- foo: %p\n",foo); // Look like heap
    printf("- &addr5: %p\n",&addr5); // Look like heap because it is initialized out of the main scope

    point_at(&addr5);

    printf("- &addr6: %p\n",&addr6);
    printf("- yos: %p\n",yos);
    printf("- addr4: %p\n",addr4);
    printf("- &addr4: %p\n",&addr4);

    printf("- &foo1: %p\n" ,&foo1);
    printf("- &foo1: %p\n" ,&foo2);
    printf("- &foo2 - &foo1: %ld\n" ,&foo2 - &foo1);
    return 0;
}

int foo(){
    return -1;
}

void point_at(void *p){
    int local;
    static int addr0 = 2;
    static int addr1;


    long dist1 = (size_t)&addr6 - (size_t)p;
    long dist2 = (size_t)&local - (size_t)p;
    long dist3 = (size_t)&foo - (size_t)p;

    printf("dist1: (size_t)&addr6 - (size_t)p: %ld\n",dist1);
    printf("dist2: (size_t)&local - (size_t)p: %ld\n",dist2);
    printf("dist3: (size_t)&foo - (size_t)p:  %ld\n",dist3);

    printf("- addr0: %p\n", & addr0);
    printf("- addr1: %p\n",&addr1);
}

void foo1 (){
    printf("foo1\n");
}

void foo2 (){
    printf("foo2\n");
}
//What can you say about the numerical values? Do they obey a particular order?
//Answer: we can say about the numerical value its allocated the memory by the size of each object takes in the memory in sequence

//Check long data size on your machine using sizeof operator. Is long integer data type enough for dist (address difference) variables
// Answer: long type is up to 2^32 which is up to −2,147,483,647 we can see (size_t)&local - (size_t)p is  46253991792668 which is far greater than long can be.