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

    //------- un tableau de 10 chaine de charactère-------//
    // tableau 2d

    char **str = NULL;
    str = malloc(sizeof(char*) * 10);
    for (int j = 0; j < 10; i++)
    {
        str[j] = malloc(sizeof(char) * 50);
    }
    //strcp(str[0], "je ");
    //printf("%s", str[0][0]);
    str[0][0] = "je ";
    str[1][0] = "suis ";
    str[2][0] = "con";
    str[3][0] = "tent ";
    str[4][0] = " !";
    for (int j = 0; j < 10; i++)
    {
        free(str[j][0]);
    }
    free(str);

    return 0;
}