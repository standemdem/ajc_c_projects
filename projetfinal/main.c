#include "lib.h"
#include "func.h"
#include "struct.h"



int main()
{
    Hotel_de_ville zorgland = initialisation_jeu();
    
    int choice;
    while (choice !=5)
    {
        printf("Bienvenu à Zorgland\n");
        // display the village
        afficher_menu();

        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // afficher les informations du village
            afficher_etat_village(zorgland);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        
        
        default:
            break;
        }
    }
    return 0;
}