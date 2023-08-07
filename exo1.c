#include <stdio.h>

int estPair(int nombre)
{
    if (nombre%2 ==0)
    {
        return 1; //pair
    }
    return 0; //impair
}

int est_prime(int nombre){
    int i= nombre-1;
    while (i!=1)
    {
        if (nombre%i==0)
        {
            return 0;
        }
        
        i--;
    }
    return 1;
}

void afficherResultat(int nombre, int pair, int premier)
{
    if (pair==1 && premier ==1)
    {
        printf("%d est un nombre pair et premier\n", nombre);
    }
    else if (pair ==1 && premier==0)
    {
        printf("%d est un nombre pair\n", nombre);

    }
    else if (premier==1)
    {
        printf("%d est un nombre premier\n", nombre);
    }
    else {
        printf("%d n'est ni pair ni premier\n", nombre);
    }
}

int main()
{
    /* code */
    int nombre = 7;
    int is_pair = estPair(nombre);
    int is_prime = est_prime(nombre);
    afficherResultat(nombre, is_pair, is_prime);
    return 0;
}
