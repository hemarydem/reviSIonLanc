#include "func.h"

//write entire functions
void menu(){
    printf("la temps d'impression est de %d", compar(typeStr()));
}

char * typeStr(){
    char * string;
    string = malloc(sizeof(char) * 250);
    fgets(string,250,stdin);
    string[(int)strlen(string) - 1] = '\0';
    return string;
}

int compar(char * str){
    char* index = str;
    char *startLetter;
    char *endLetter;
    int size = 0;
    int i = 1;
    int totalTime = 0;
    startLetter = index;
    endLetter = index + 1;
    size = (int) strlen(str);
    while (i < size) {
        totalTime += durationPrintPath(startLetter, endLetter);
        startLetter++;
        endLetter++;
        i++;
    }
    return totalTime;
}

int durationPrintPath(char *a, char *b){
    char * letterA = NULL;
    char * letterZ = NULL;
    char * strA;
    char * strB;
    strA = malloc(sizeof(char) * 2);
    strB = malloc(sizeof(char)* 2);
    letterA = malloc(sizeof(char) * 2);
    letterZ = malloc(sizeof(char) * 2);
    letterA = "a\0";
    letterZ = "z\0";
    strA[0] = *a;
    strB[0] = *b;
    strA[1] = '\0';
    strB[1]= '\0';
    int val = 0;
    if(*strA < *strB) {
        val = strcmp(strB, strA);
    } else {
        val = strcmp(strA, strB);
    }
    if (val < 13) {
        free(strA);
        free(strB);
        return val;
    } else {
        val =  26 - val;
        free(strA);
        free(strB);
        return  val;
    }
}
/*
int durationPrintPath(char *a, char *b){
    int val = 0;
    if(*a < *b) {
       if (strcmp(b, a) < 13) {
            return strcmp(b, a);
        } else {
            return  strcmp("a",a) + (strcmp("z",b));
        }
    } else {
        if (strcmp(a, b) < 13) {
            return strcmp(a, b);
        } else {
            return  strcmp("a",a) + (strcmp("z",b));
        }
    }
}*/