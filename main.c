#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "func.h"
//to compile gcc main.c func.c -o prg.exe don't need .exe if you are on mac
int main(int argc, char ** argv) {
     // un caractère
    char firstChar = 'a';
    printf('%c\n', firstChar);

    // un tableau de caractère
    char arrChar[3];
    arrChar[0] = 'a';
    arrChar[1] = 'b';
    arrChar[2] = 'c';
    
    int i  = 0;

    while (i < 3)
    {
        printf("arrChar[%d] = ‰c", i,arrChar[i]);
        i++;
    }
    printf("\n");
    
    //une constante de chaine de caractère
    const char toto = "hello";
    char *tata = "coucou";

    printf("toto = %s, tata = %s\n", toto, tata);

    //chaine de caractère longeur 20

    return 0;
    return 0;
}