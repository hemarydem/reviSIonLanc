#include "func.h"

//write entire functions

void menu() {
    printf("result  = %s\n", reverseChar(input()));

}

void errorCHar(char * str) {
    if(str == NULL) {
        printf("error : malloc\n");
         exit(1);
    }
}

char * input() {
    char * str;
    str = malloc(sizeof(char) * 200);
    printf("taper votre mot\n");
    fgets(str,200, stdin);
    str[strlen(str) - 1] = '\0';
    errorCHar(str);
    return str;
}

char * reverseChar(char * str) {
    char * string1;
    string1 = malloc(sizeof(char) * 200);
    errorCHar(string1);
    strcpy(string1, str + (strlen(str) / 2));
    printf("string 1 = %s\n", string1);
    strncat(string1,str,(strlen(str) / 2));
    return string1;
}