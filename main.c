/*
# Construire un programme permettant de vérifier la validité d'un mot de passe de type chaîne (maximum 5
# essais). Le mot de passe sera enregistré sous la forme d'une constante dans le programme.
# Le programme doit afficher "Bienvenue" en cas de réussite et "Erreur" en cas d'échec.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "func.h"
//to compile gcc main.c func.c -o prg.exe don't need .exe if you are on mac
int main(int argc, char ** argv) {
    passWtype();
    return 0;
}