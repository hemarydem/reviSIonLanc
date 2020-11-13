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