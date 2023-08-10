#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Inversion d'une chaîne
// Écrivez une fonction qui prend une chaîne en entrée et renvoie un nouveau pointeur 
// vers une chaîne qui est l'inversion de l'entrée. Par exemple, "abcd" deviendrait "dcba".


char *str_invert(char *chain)
{
    int len_chain = strlen(chain);
    for (int i = 0; i < len_chain / 2; i++)
    {
        char temp = chain[i];
        // printf("temp value= %c\n", temp);
        chain[i] = chain[len_chain -i -1];
        // printf("chain new value= %c\n", chain[i]);
        chain[len_chain-i -1] = temp;
    }
}
char *string_copy(char *source, char *destination)
{
    for (int i = 0; source[i]!='\0'; i++)
    {
        *(destination + i)=source[i];
    }
}
char *mon_strdup(char *str_param)
{
    char *str_copy = malloc(strlen(str_param));
    printf("Dans fonction avt copie %p\n", str_copy);
    string_copy(str_param, str_copy);
    printf("Dans fonction après copie %p\n", str_copy);

    return str_copy;
}


int main()
{
    char *word = "Hello World";
    char *invertme= malloc(strlen(word));
    string_copy(word, invertme);
    char *inverted = mon_strdup(invertme);
    printf("invertme = %s\n",invertme);
    printf("invertme add= %p\n",invertme);

    str_invert(inverted);
    
    printf("invertme add= %p\n",invertme);
    printf("invertme = %s\n",invertme);
    printf("inverted add = %p\n",inverted);
    printf("inverted = %s\n",inverted);


    return 0;
}