//
// Created by spl211 on 04/04/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char censor(char c) {
    if (c == '!')
        return '*';
    else
        return c;
}

char *map(char *array, int array_length, char (*f)(char)) {
    /* TODO: Complete during task 2.a */
    char *mapped_array = (char *) (malloc(array_length * sizeof(char)));
    int i = 0;
    for (i; i < array_length; ++i) {
        mapped_array[i] = f(array[i]);
    }
    return mapped_array;
}

int main(int argc, char **argv) {
    /* TODO: Test your code */
    char arr1[] = {'H', 'e', 'y', '!'};
    char *arr2 = map(arr1, 4, censor);
    printf("%s\n", arr2);
    free(arr2);
}