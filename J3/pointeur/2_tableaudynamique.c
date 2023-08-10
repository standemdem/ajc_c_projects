#include "Centrale.h"

// Écrivez un programme qui utilise malloc pour allouer un tableau de 5 int. 
// Initialisez-le avec les valeurs de 1 à 5, puis imprimez ces valeurs avant de libérer l'espace.

int ex2()
{
    int *tableau = malloc(sizeof(int) * 5);
    printf("Mon pointeur est: %p\n", tableau); 

    for ( int i = 0; i < 5; i++)
    {
        tableau[i] = i + 1;
        printf("%d \n", tableau[i]);
    }
    
    printf("Mon pointeur est: %p\n", tableau); 
    free(tableau);
    
    return 0;
}