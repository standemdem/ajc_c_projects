#include "lib.h"
#include "struct.h"

Hotel_de_ville initialisation_jeu()
{
    Hotel_de_ville hdv;
    hdv.level=1;
    hdv.total_scierie = 1;
    hdv.total_mine = 1;
    hdv.total_raffinerie = 0;
    hdv.max_peons = 10;
    hdv.peons_disponibles = 10;
    hdv.bois = 50;
    hdv.or = 200;
    hdv.mat_noire = 0;
    hdv.total_soldats = 0;

    Scierie *scierie=malloc(sizeof(Scierie) * 10);
    Mine *mine=malloc(sizeof(Mine) * 10);
    Raffinerie *raffinerie = malloc(sizeof(Raffinerie) * 10);
    
    // free(scierie);
    // free(mine);
    // free(raffinerie);
    return hdv;
}

void afficher_etat_village(Hotel_de_ville hdv)
{
    printf("Ressources disponibles\n");
    printf("***************************************\n");
    printf("bois: %d  or: %d  matière noire: %d\n",
            hdv.bois, hdv.or, hdv.mat_noire); 
    printf("***************************************\n");
    printf("Batiments Construits\n");
    printf("***************************************\n");
    printf("Scieries: %d, Mines: %d, Raffineries: %d\n"
            ,hdv.total_scierie, 
            hdv.total_mine, 
            hdv.total_raffinerie);
}

void afficher_menu()
{
    printf("Faites votre choix:\n");
    printf("1 - Afficher l'état du village\n");
    printf("2 - Construire un batiment\n");
    printf("3 - Collecter les ressources\n");
    printf("4 - Assigner un villageois\n");
    printf("5 - Passer un jour sans rien faire\n");
    printf("6 - Quitter le village\n");
}

void create_bat(Hotel_de_ville hdv, int numero_batiment)
{
    switch (numero_batiment)
    {
    case 1: // scierie
        if(hdv.or>=50)
        {
            hdv.total_scierie++;
            hdv.or-=50;

        }
        break;
    case 2: // Mine
        if(hdv.or >= 100 && hdv.bois >= 20)
        {
            hdv.total_mine++;
            hdv.or -= 100;
            hdv.bois -= 20;

        }
        break;    
    case 3: // Rafinerie
        if(hdv.or >= 500 && hdv.bois >=100, hdv.mat_noire>=50)
        {
            hdv.total_raffinerie++;
            hdv.or -= 500;
            hdv.bois -= 100;
            hdv.mat_noire -= 50;

        }
        break;
    default:
        break;
    }
}

void assigner_villageois()
{

}

void collecter_ressources()
{

}