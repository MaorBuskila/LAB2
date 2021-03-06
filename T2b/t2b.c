//
// Created by spl211 on 05/04/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *map(char *array, int array_length, char (*f)(char)) {
    /* TODO: Complete during task 2.a */
    char *mapped_array = (char *) (malloc(array_length * sizeof(char)));
    int i = 0;
    for (i; i < array_length; ++i) {
        mapped_array[i] = f(array[i]);
    }
    return mapped_array;
}

char censor(char c) {
    if (c == '!')
        return '*';
    else
        return c;
}

/* Gets a char c and returns its encrypted form by adding 2 to its value.
          If c is not between 0x41 and 0x7a it is returned unchanged */

char encrypt(char c) {
    if (c >= 'A' && c <= 'z') {
        return c + 2;
    } else {
        return c;
    }

}

/* Gets a char c and returns its decrypted form by reducing 2 to its value.
            If c is not between 0x41 and 0x7a it is returned unchanged */
char decrypt(char c) {
    if (c >= 'A' && c <= 'z') {
        return c - 2;
    } else {
        return c;
    }

}

/* dprt prints the value of c in a decimal representation followed by a
           new line, and returns c unchanged. */
char dprt(char c) {
    printf("%d \n", c);
    return c;
}

/* If c is a number between 0x41 and 0x7a, cprt prints the character of ASCII value c followed
                    by a new line. Otherwise, cprt prints the dot ('*') character. After printing, cprt returns
                    the value of c unchanged. */
char cprt(char c) {
    if (c >= 'A' && c <= 'z') {
        printf("%c \n", c);
    } else {
        printf("%c\n", '*');
    }
    return c;
}

char my_get(char c) {
    char ch;
    while ((ch = fgetc(stdin)) != EOF) {
        if (ch == c)
            continue;
        else
            return ch;
    }
    return 1;
}

/* Ignores c, reads and returns a character from stdin using fgetc. */

int main(int argc, char **argv) {
    /* TODO: Test your code */
    int base_len = 5;
    char arr1[base_len];
    char *arr2 = map(arr1, base_len, my_get);
    char *arr3 = map(arr2, base_len, encrypt);
    char* arr4 = map(arr3, base_len, dprt);
    char* arr5 = map(arr4, base_len, decrypt);
    char* arr6 = map(arr5, base_len, cprt);

//    //Printing arr2
//    printf("%s\n", "arr2:");
//    printf("%s\n", arr2);
//
//    //Printing arr3
//    printf("%s\n", "arr3:");
//    size_t n = strlen(arr3);
//    for (size_t i = 0; i < n; i++) {
//        char e = arr3[i];
//        printf("%d \n", e);
//    }
//
//    //Printing arr4
//    printf("%s\n", "arr4:");
//    printf("%s\n", arr4);
//
//
//    //Printing arr5
//    printf("%s\n", "arr5:");
//    printf("%s\n", arr5);
//    for (size_t i = 0; i < base_len; i++) {
//        char e = arr5[i];
//        printf("%d \n", e);
//    }
//    //Printing arr6
//    printf("%s\n", "arr6:");
//    printf("%s\n", arr6);

    free(arr2);
    free(arr3);
    free(arr4);
    free(arr5);
    free(arr6);
}