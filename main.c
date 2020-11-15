#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include "func.h"


/*
2 chaines de char string et newString
2 pointeurs ptr = newString, et ptr2 = string

- tant que l'on trouve le mot à remplacer, on affecte à ptr l'adresse du mot à remplacer
- on strcpy à ptr le nouveau mot (donc écrase dans newString)
- on met dans ptr2 la position juste après le mot remplacé (dans String) 
- on se place juste apres le nouveau mot (dans newString)
- on strcpy à ptr (apres le new mot) le reste de la chaine String (strcpy(ptr, ptr2)

*/

int main(int argc, char ** argv) {
    char *pose;
    char *pose2;
    char *string;
    char *stringNew;
    string = malloc(sizeof(char) * 200);
    stringNew = malloc(sizeof(char) * 200);
    strcpy(string, argv[1]);
    strcpy(stringNew, argv[1]);
    pose = string;
    pose2 = stringNew;
    while( (pose = strstr(pose, argv[2])) != NULL ) {
        strcpy(pose,argv[3]);
        pose += strlen(argv[3]);
        pose2 = strstr(pose2, argv[2]);
        pose2 += strlen(argv[2]);
        strcpy(pose,pose2);
    }
    printf("%s", string);
    return 0;
}