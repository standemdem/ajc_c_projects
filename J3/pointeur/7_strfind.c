#include "centrale.h"
#include <string.h>
// Recherche d'un caractère
// Écrivez une fonction qui prend une chaîne et un caractère en entrée, et renvoie un pointeur vers 
// la première occurrence de ce caractère dans la chaîne (ou NULL si le caractère n'est pas trouvé).

char *find_char(char *chain, char letter)
{
    for (int i = 0; chain[i] !='\0'; i++)
    {
        if (chain[i]==letter)
        {
            return &chain[i];
        }
    }
    
    return NULL;
}

int ex7()
{
    char *name="stanislas";
    char *chain = malloc(sizeof(char) *(strlen(name)+1));
    printf("%p\n", chain);

    // fill chain with name value
    string_copy(name, chain);
    printf("%s\n", chain);
    printf("%p\n", chain);

    // find pointer to target letter
    char *target_ptr = find_char(chain, 'w');
    printf("%p\n", target_ptr);
    free(chain);
    return 0;
}