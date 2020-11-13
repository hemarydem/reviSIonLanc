#include "func.h"

//write entire functions
void testDEstrcmp() {
    char *str1;
    str1 = NULL;
    char *str2;
    str2 = NULL;
    str1 = malloc(sizeof(char) * 50);
    str2 = malloc(sizeof(char) * 50);
    int a;
    if(str1 != NULL && str2 != NULL) {
        strncpy(str1,"hello",5);
        str1[5] = '\0';
        strncpy(str2,"hello",5);
        str2[5] = '\0';
        a = strcmp(str1, str2);
        printf("a  = %d\n %s| \n %s| \n", a, str1, str2);
        printf("a  = %d\n %s_| \n %s_| \n", a, str1, str2);
        strncpy(str1,"hello",5);
        str1[5] = '\0';
        strncpy(str2,"Pello",5);
        str2[5] = '\0';
        a = strcmp(str1, str2);
        printf("a  = %d\n %s| \n %s| \n", a, str1, str2);
        printf("a  = %d\n %s_| \n %s_| \n", a, str1, str2);
    } else
    {
        printf("error");
    }
    free(str1);
    free(str2);
}

char *getPw() {
    char *str;
    str = NULL;
    str = malloc(sizeof(char) * 50);
    printf("saisir le mot de passe\n");
    fgets(str, 49, stdin);
    //printf("%s|", str);
    str[strlen(str) - 1]='\0';
    //strtok(str, "\n");
    //printf("%s|", str);
    return str;
}

int isPw(char * passwd, char *str) {
    if(strcmp(passwd, str) == 0) return 1;
    return 0;
}

int passWtype(){
    char *str;
    str = malloc(sizeof(char) * 50);
    int next = 0;
    while (next < 5) {
        str = getPw();
        if(isPw("toto", str) == 1) {
            printf("ok\n");
            return 1;
        } else
        {
            printf("mauvais mot de passe\n");
            next++;
        }
    }
    free(str);
    return 0;
}