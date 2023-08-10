#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction strcpy personnalisée
// Écrivez une fonction mon_strcpy qui prend deux chaînes (source et destination) 
// et copie la source dans la destination. Assurez-vous que la destination a suffisamment d'espace!

char *strcpy_perso(char *src, char *desti)
{
    for (int i = 0; i < strlen(src); i++)
    {
        desti[i]=src[i];
    }
    return desti;
}

int main()
{   
    char *name = "stanislas";
    printf("%c\n", *name);
    char *source = malloc(sizeof(char)*10);
    char *destination = malloc(sizeof(char) * 11);

    for (int i = 0; name[i]!='\0'; i++)
    {
        source[i]=name[i];
    }
    // autre methode pour se ballader avec le pointeur
    // for (int i = 0; name[i]!='\0'; i++)
    // {
    //     *(source + i)=name[i];
    // }

    printf("%p\n", destination);
    strcpy_perso(source, destination);
    printf("%s\n", destination);
    printf("%p\n", destination);


    free(destination);
    free(source);

    return 0;
}