#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "func.h"
//to compile gcc main.c func.c -o prg.exe don't need .exe if you are on mac
int main(int argc, char ** argv) {
     //------- un caractère-----------//
    char firstChar = 'a';
    printf("%c\n", firstChar);

    //------- un tableau de caractèr-----------//e
    char arrChar[3];
    arrChar[0] = 'a';
    arrChar[1] = 'b';
    arrChar[2] = 'c';
    
    int i  = 0;

    while (i < 3)
    {
        printf("arrChar[%d] = %c\n", i,arrChar[i]);
        i++;
    }
    printf("\n");
    
    //------- une constante de chaine de caractère-----------//
    const char *toto = "hello";
    char *tata = "coucou";

    printf("toto = %s, tata = %s\n", toto, tata);

    //------- chaine de caractère longeur 20-----------//
    char * string = NULL;
    string = malloc(sizeof(char) * 20);
    if(string != NULL) {
        for(int j = 0; j < 10; j++) {
            string[j] = 'y';
            string[j + 1] = 'o';
        }
        printf("string = %s\n", string);
    }
    free(string);

    return 0;
}