#include <stdio.h>
#include <stdlib.h>
// Fonction strcpy personnalisée
// Écrivez une fonction mon_strcpy qui prend deux chaînes (source et destination) 
// et copie la source dans la destination. Assurez-vous que la destination a suffisamment d'espace!

void strcpy_perso(char *src, char *desti)
{
    for (int i = 0; src[i]!="\0"; i++)
    {
        desti[i]=src[i];
        printf("%s", src[i]);
    }
    
    // *destination = *source;
    printf("%s ", *desti);
}

int main()
{   
    char *name = "stanislas";
    char *source = malloc(sizeof(char)*10);
    char *destination = malloc(sizeof(char) * 11);

    printf("%p \n", source);
    for (int i = 0; name[i]!="\0"; i++)
    {
        source[i]=name[i];
    }
    printf("%p \n", source);
    printf("%s\n", source);
    
    // printf("%p\n", destination);

    // strcpy_perso(&source, destination);

    free(destination);
    free(source);

    return 0;
}