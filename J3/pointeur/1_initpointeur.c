#include <stdio.h>
#include <stdlib.h>
// Écrivez un programme qui utilise malloc pour allouer un espace pour un int, 
// l'initialise à 5, puis imprime cette valeur via le pointeur avant de libérer l'espace.


int main()
{
    int *nb= malloc(sizeof(int));
    printf("Mon pointeur est: %p\n", nb); 
    *nb=5;
    printf("Ma valeur est: %d\n", *nb); 
    printf("Mon pointeur est: %p\n", nb); 
    free(nb);
    return 0;
}