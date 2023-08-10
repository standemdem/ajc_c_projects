#include "Centrale.h"
#include <string.h>
// Fonction strcat personnalisée
// Écrivez une fonction mon_strcat qui prend deux chaînes 
// (destination et source) et ajoute la source à la fin de la destination.

char *mon_strcat(char *source, char *destination)
{
    int size = strlen(destination);
    for (int i = 0; source[i]!='\0'; i++)
    {
        destination[i + size] = source[i];
    }
    *(destination + strlen(source) + size)='\0';
    return destination;
}

int ex6()
{
    char source[10] = "Stanislas" ;
    char destination[23] = "de Montmarin ";
    // printf("%s\n", source);
    printf("%p\n", destination);
    mon_strcat(source, destination);
    printf("%s\n", destination);
    printf("%p\n", destination);
    
    return 0;
}