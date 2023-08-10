#include "Centrale.h"
#include <string.h>
// Fonction strdup personnalisée
// Écrivez une fonction mon_strdup qui prend une chaîne en entrée et retourne un nouveau pointeur 
// vers une nouvelle chaîne qui est une copie de l'entrée. Utilisez malloc pour allouer la mémoire.

char *mon_strdup(char *str_param)
{
    char *str_copy = malloc(strlen(str_param));
    printf("Dans fonction avt copie %p\n", str_copy);
    string_copy(str_param, str_copy);
    printf("Dans fonction après copie %p\n", str_copy);

    return str_copy;
}

int ex5()
{
    char *my_str= malloc(sizeof(char));
    // printf("chaine originale %s\n", my_str);
    printf("chaine originale %p\n", my_str);
    char *my_str_dup = mon_strdup(my_str);
    // printf("chaine dupliquée: %s\n", my_str_dup);
    printf("chaine dupliquée: %p\n", my_str_dup);
    free(my_str_dup);
    free(my_str);
    return 0;
}