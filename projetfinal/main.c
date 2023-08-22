#include "lib.h"
#include "func.h"
#include "struct.h"



int main()
{
    int jour=0;
    printf("Bienvenu à Zorgland, jour %d\n", jour);
    Hotel_de_ville *zorgland = initialisation_jeu();
    
    int choice;
    afficher_menu();    
    while (choice !=6)
    {
        // display the village
        

        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // afficher l'état du village
            afficher_etat_village(zorgland);
            afficher_menu();
            break;
        case 2: // Construire un batiment
            afficher_ecran_construction();
            scanf("%d", &choice);
            creer_batiment(zorgland, choice);
            break;
        case 3: // Recolter ressource
            printf("Disponible à la Màj Sexy Dragons et Tentacules\n");
            break;
        case 4: // Assigner un villageois
            afficher_choix_assignation();
            break;
        case 5: // Passer un jour sans rien faire
            afficher_ne_rien_faire();
            break;
        
        
        default:
            break;
        }
    }
    return 0;
}