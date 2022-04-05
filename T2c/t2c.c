#include <stdlib.h>
#include <stdio.h>

//
// Created by spl211 on 05/04/2022.
//
char quit(char c){
    if (c=='q')
        exit(1);
    else
        return c;
} /* Gets a char c,  and if the char is 'q' , ends the program with exit code 0. Otherwise returns c. */
int main(int argc, char **argv) {

    quit('q');
    printf("%d" , 8);

}