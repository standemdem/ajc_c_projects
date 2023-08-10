#include "Centrale.h"

// Fonction strlen personnalisée
// Écrivez une fonction mon_strlen qui prend en entrée une chaîne 
// de caractères et retourne sa longueur (sans utiliser la fonction strlen de la bibliothèque).

int mon_strlen(char *phrase)
{
    int i=0;
    for (i; phrase[i]!='\0';)
    {
        i++;
    }
    return i;
}

int ex3()
{
    char *phrase = "coucou";
    printf("%d\n",mon_strlen(phrase));
    return 0;
}
