#include <stdio.h>

// Ecrire un programme en C qui affiche un sapin en ASCII à la console
//Le sapin sera constitué de * pour représenter les feuilles et de 'espaces) pour le fond.
// Chaque niveau du sapin au une ligne de plus que le niveau précédent.

// Tronc du sapin: Une fois que les feuilles du sapin sont affichées, 
// ajoutez un tronc constitué du caractère |
// LE tronc à une hauteur égale à 20% de la hauteur totale du sapin (arrondi entier sup)
// Largeur de 1 caractère pour les sapins de hauteur <=3
// largeur de 2 pour les sapins de hauteur >3

void createTree(int hauteur)
{
    int etoile = 1;
    int counter = 1;
    int espace= hauteur;
    char star= 42;
    int tree_width = (hauteur * 2)-1;
    int trunc_height= hauteur *0.2;

    for (hauteur ; hauteur > 0; hauteur--)
    {
        for (int esp = hauteur; esp>0;esp-- )
        {
            printf(" ");
        }

        for (int i = 0; i < etoile; i++)
        {
            printf("%c", star);
        }
        printf("\n");
        counter= counter + 1;
        etoile = etoile +2;        
    }
        
    // for (int i = 0; i < tree_width; i++)
    // {
    //     printf("*");
    // }
    // printf("\n");
    
}

int main()
{
    createTree(12);    
    return 0;
}