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

void NewAfficherReponse(int nombre, int pair, int premier){
    switch (pair)
    {
    case 1:
        if (premier ==1)
        {
            printf("%d est un nombre pair et premier\n", nombre);
            break;
        }
        else
        {
            printf("%d est un nombre pair\n", nombre);
            break;
        }        
    case 0:
        if (premier==1)
        {
            printf("%d est un nombre premier\n", nombre);
            break;
        }
        else
        {
            printf("%d n'est ni pair ni premier\n", nombre);
            break;
        }

    default:
        break;
    }
}
int main()
{
    /* code */
    int nombre = 224;
    int is_pair = estPair(nombre);
    int is_prime = est_prime(nombre);
    afficherResultat(nombre, is_pair, is_prime);
    NewAfficherReponse(nombre,  is_pair, is_prime);
    return 0;
}
