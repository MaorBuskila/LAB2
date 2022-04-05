//
// Created by spl211 on 05/04/2022.
//

#include <stdlib.h>
#include <stdio.h>

char *map(char *array, int array_length, char (*f)(char)) {
    /* TODO: Complete during task 2.a */
    char *mapped_array = (char *) (malloc(array_length * sizeof(char)));
    int i = 0;
    for (i; i < array_length; ++i) {
        mapped_array[i] = f(array[i]);
    }
    return mapped_array;
}

struct fun_desc {
    char *name;
    char (*fun)(char);
};

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

char quit(char c) {
    if (c == 'q')
        exit(1);
    else
        return c;
} /* Gets a char c,  and if the char is 'q' , ends the program with exit code 0. Otherwise returns c. */

struct fun_desc menu[] = {
        {"Censor",       censor},
        {"Encrypt",      encrypt},
        {"Decrypt",      decrypt},
        {"Print dec",    dprt},
        {"Print string", cprt},
        {"Get string",   my_get},
        {"Quit",         quit},
        {NULL, NULL}
};


int main(int argc, char **argv) {
    char arr[5] = {'\0'};
    char *carray = arr;
    char ch;
    int choise;
    int i;
    int readingOptionFlag = 1;
    while ((ch = fgetc(stdin)) != '6') {
        if (ch >= '0' && ch <= '6') {
          if(readingOptionFlag) {
              fgetc(stdin);
              readingOptionFlag = 0;
          }
            for (i = 0; i < 6; i++) {
                printf("%d) %s\n", i, menu[i].name);
            }
            choise = ch - '0';
            printf("Option: %c\n", ch);
            printf("Within bounds\n");
            fflush(stdin);
            void (*func_ptr)(char);
            func_ptr = menu[choise].fun;
            carray = map(carray, 5, *func_ptr);
        } else {
            printf("Not Within bounds\n");
        }
        printf("Done.\n");
        readingOptionFlag =1;
        fflush(stdin);

    }


}