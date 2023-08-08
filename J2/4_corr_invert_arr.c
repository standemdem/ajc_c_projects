# include <stdio.h>

int main()
{
    int tab[7] = {1, 2, 3, 4, 5, 6, 7};
    int taille = 7;

    for (int i = 0; i < taille / 2 ; i++)
    {
        int tampon=tab[i];
        tab[i] = tab[taille - i - 1];
        tab[taille - i - 1]= tampon;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", tab[i]);
    }
    
    
    return 0;
}