#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "func.h"
//------- tableau dynamique chaine de charactère --------//
    // la fonction retourne un char * ranger le resultat dans un char*
    // ne pas oublier de free
    char * dynaChar(int size) {
        char * arrChar = NULL;
        arrChar = malloc(sizeof(char) * size);
        if(arrChar != NULL) {
            return arrChar;
        }
        printf("error\n");
        return arrChar;
    }
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

    //------- chaine de caractère longeur 20---------------//
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

    //------- un tableau de 10 chaine de charactère----------//
    // tableau 2d
    char str1[10][10];

    //------- pointeur de tableau char taill 255-------------//

    char *str[255];// ;

    //------- tableau dynamique chaine de charactère --------//
    // la fonction retourne un char * ranger le resultat dans un char*
    // ne pas oublier de free
    char *str2;
    str2 = dynaChar(5);
    free(str2);

    //------- chaîne de caractère dynamique initialisée à "ESSAI"--------//
    char * str3;
    str3 = malloc(sizeof(char) * 6);
    if(str3 != NULL) {
        strcpy(str3, "ESSAI");
        printf("str3 = %s\n", str3);
        free(str3);
    }

    //// avec strncpy
    char * str4;
    str4 = malloc(sizeof(char) * 6);
    
    char * str5;
    str5 = malloc(sizeof(char) * 6);

    if(str4 != NULL && str5 != NULL) {
        //char *strncpy(char *dest, const char *src, size_t n);
        //retourne adresse de dest
        strncpy(str4,"ESSAI", 5);
        str4[5] = '\0';
        printf("str4 = %s\n", str4);
        
        strncpy(str5,"12345", 6);
        str5[5] = '\0';
        printf("str5 = %s\n", str5);
        strncpy(str5,"999999", 4);
        str5[5] = '\0';
        printf("str5 = %s\n", str5);
        
        free(str4);
        free(str5);
    }
    

    //------- chaîne de caractère dynamique initialisée à "ESSAI"--------//
    char * str6;
    str6 = malloc(sizeof(char) * 20);

    char * str7;
    str7 = malloc(sizeof(char) * 20);
    if(str6 != NULL && str7 != NULL) {
        strcpy(str6, "ESSAI");
        printf("str6 = %s\n", str6);

        strncpy(str7, "ESSAI",5);
        str7[5] = '\0';
        printf("str7 = %s\n", str7);
        
        free(str6);
        free(str7);
    }
    char * str8;
    str8 = malloc(sizeof(char) * 20);
    if(str8 != NULL) {
        strncpy(str8, "                        ",19);
        str8[19] = '\0';
        printf("str8 = %s|\n", str8);
        free(str8);
    }

    //------------tableau statique à 2 dimensions de chaînes de caractères.-------------//
    char chaine[10][10];
    
    for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
           chaine[i][j] = 'o';
       }
    }
    for(int i = 0; i < 10; i++){
       chaine[i][i] = 'I';
    }
    for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
           printf("%c",chaine[i][j]);
       }
       printf("\n");
    }


    //
    /*int ** a = NULL;
    a = malloc(sizeof(int*) * 10);
    for (size_t i = 0; i < 10; i++)
    {
        a[i] = malloc(sizeof(int) * 10);
    }

    for (size_t i = 0; i < 10; i++)
    {
       free(a[i]);
    }
    free(a);*/
    return 0;
}