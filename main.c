#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "func.h"
//to compile gcc main.c func.c -o prg.exe don't need .exe if you are on mac
//printf("%s\n",);
int main(int argc, char ** argv) {
    char * name = NULL;
    char * name2 = NULL;
    char * ville = NULL;
    char * ville2 = NULL;
    char * i1 = NULL;
    char * i2 = NULL;
    char * capital = "Paris";
    char * famName = "hamed";
    char * catColor = "rougeNoire";
    char *cp1 = NULL;
    char * cp2 = NULL;
    char * ptr = NULL;
    char * ptr2 = NULL;

    ptr = malloc(sizeof(char) * 200);
    ptr2 = malloc(sizeof(char) * 200);

    cp1 = malloc(sizeof(char) * 200);
    cp2 = malloc(sizeof(char) * 200);

    name = malloc(sizeof(char) * 200);
    name2 = malloc(sizeof(char) * 200);

    ville = malloc(sizeof(char) * 200);
    ville2 = malloc(sizeof(char) * 200);

    i1 = malloc(sizeof(char) * 200);
    i2 = malloc(sizeof(char) * 200);
    name2 = strcpy(name,"remy");
    printf("name = %s\n", name);
    printf("name2 = %s\n\n", name2);

    ville2 = strncpy(ville, capital, 200);
    printf("ville = %s|\n", ville);
    printf("ville2 = %s|\n\n", ville2);

    ville2 = strncpy(ville, capital, strlen(capital));
    ville[strlen(capital) + 1] = '0';
    ville2[strlen(capital) + 1] = '0';
    printf("ville = %s|\n", ville);
    printf("ville2 = %s|\n\n", ville2);

    printf("1.s = %.1s", name);// affiche r
    printf("\n");
    printf("2.s = %.2s", name);// affiche re
    printf("\n");
    printf("6.s = %.6s", name);// affiche remy

    int size = strlen(name);
    printf("\n%d\n", size);

    //char * famName = "hamed";
    char * input = strcat(name, famName);
    printf("%s\n", input);
    printf("%s\n",name);

    //char * catColor = "rougeNoire";
    strcpy(i1, "la couleur du chat est ");
    i2 = strncat(i1, catColor,5);
    printf("%s|\n", i1);
    printf("%s|\n", i2);
    // strncat ne gère pas le 0 il faut l'ajouté s'il n'est ps présent dans la 
    //chaine qui a été ajouté
    // strncat est intéressant quand on est pas sur que la chaine destinateure
    // dispose d'assez de place pour recevoir
    int gap = 0;
    strncpy(cp1, "tokyo",200);
    strncpy(cp2, "tokyo",200);
    gap  = strcmp(cp1, cp2);// renvoiie une erreur car pas de \0 en bourt de chaine

    printf("gap = %d", gap);
    printf("\ncp1 = %s|\ncp2 = %s|\n", cp1, cp2);
    
    strncpy(cp1, "Amiens",200);
    strncpy(cp2, "Amsterdam",200);
    gap  = strcmp(cp1, cp2);// renvoiie une erreur car pas de \0 en bourt de chaine

    printf("gap = %d", gap);
    printf("\ncp1 = %s|\ncp2 = %s|\n", cp1, cp2);

    strncpy(cp1, "Amiens",200);
    strncpy(cp2, "Amsterdam",200);
    gap  = strncmp(cp1, cp2,2);// renvoiie une erreur car pas de \0 en bourt de chaine

    printf("on ne compar que les 2 première lettre \ngap = %d", gap);
    printf("\ncp1 = %s|\ncp2 = %s|\n", cp1, cp2);

    int result;
    strcpy(ptr, "jesuiscontentd\'êtrecontentparcequejesuiscontent");
    strcpy(ptr2, "content");
    result = strspn(ptr, ptr2 );
    printf("result = %d\n", result);

    const char str1[] = "ABCDEFG019874";
    const char str2[] = "ABCD";

    result= strspn(str1, str2);
    printf("result = %d\n", result);
    
    return 0;
}