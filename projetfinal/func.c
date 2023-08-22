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
    printf("3 - Collecter les ressources (fonctionnalité à venir)\n");
    printf("4 - Assigner un villageois\n");
    printf("5 - Passer un jour sans rien faire\n");
    printf("6 - Quitter le village\n");
}

void afficher_choix_assignation()
{
    printf("Faites votre choix:\n");
    printf("1 - Ajoutez villageois à la scierie\n");
    printf("2 - Ajoutez villageois à la mine\n");
    printf("3 - Ajoutez villageois à la raffinerie\n");
    printf("4 - retour en arrière\n");
}

void afficher_ecran_construction()
{
    printf("Faites votre choix:\n");
    printf("1 - Construire une Scierie\n");
    printf("2 - Construire une Mine\n");
    printf("3 - Construire une Raffinerie\n");
    printf("4 - retour en arrière\n");
}

void afficher_ne_rien_faire()
{
    printf("Vous vous installez confortablement dans votre hamac\n");
    sleep(1);
    printf("Un Pulco Citron apparaît par magie dans votre main\n");
    sleep(1);
    printf("Il fait définitivement trop chaud pour travailler aujourd'hui\n");
    sleep(2);
}

void creer_batiment(Hotel_de_ville hdv, int numero_batiment)
{
    switch (numero_batiment)
    {
    case 1: // scierie
        if (hdv.or >= 50)
        {
            hdv.total_scierie++;
            hdv.or -= 50;

            // Ajouter la scierie à la liste
            hdv.liste_scierie = realloc(hdv.liste_scierie, hdv.total_scierie * sizeof(Scierie));
            Scierie nouvelle_scierie = {50, 0, 0, 0, 0, 0, false};  // Initialisation des valeurs
            hdv.liste_scierie[hdv.total_scierie - 1] = nouvelle_scierie;
            printf("La scierie n° %d a été créée", hdv.total_scierie);
        }
        break;
    case 2: // Mine
        if (hdv.or >= 100 && hdv.bois >= 20)
        {
            hdv.total_mine++;
            hdv.or -= 100;
            hdv.bois -= 20;

            // Ajouter la mine à la liste
            hdv.liste_mine = realloc(hdv.liste_mine, hdv.total_mine * sizeof(Mine));
            Mine nouvelle_mine = {100, 20, 0, 0, 0, 0, false};  // Initialisation des valeurs
            hdv.liste_mine[hdv.total_mine - 1] = nouvelle_mine;
        }
        break;
    case 3: // Rafinerie
        if (hdv.or >= 500 && hdv.bois >= 100 && hdv.mat_noire >= 50)
        {
            hdv.total_raffinerie++;
            hdv.or -= 500;
            hdv.bois -= 100;
            hdv.mat_noire -= 50;

            // Ajouter la raffinerie à la liste
            hdv.liste_raffinerie = realloc(hdv.liste_raffinerie, hdv.total_raffinerie * sizeof(Raffinerie));
            Raffinerie nouvelle_raffinerie = {500, 100, 50, 0, 0, 0, false};  // Initialisation des valeurs
            hdv.liste_raffinerie[hdv.total_raffinerie - 1] = nouvelle_raffinerie;
        }
        break;
    default:
        break;
    }
}

 void assigner_villageois(Hotel_de_ville hdv, int choix)
{
    switch (choix)
    {
    case 1: // scierie
        if (hdv.peons_disponibles >= 2)
        {
            hdv.peons_disponibles -= 2;
            hdv.liste_scierie->peons_assignés += 2;
        }
        break;
    case 2: // mine
        if (hdv.peons_disponibles >= 3)
        {
            hdv.peons_disponibles -= 3;
            hdv.liste_mine->peons_assignés += 3;
        }
        break;
    case 3:
        if (hdv.peons_disponibles >= 5)
        {
            hdv.peons_disponibles -= 5;
            hdv.liste_raffinerie->peons_assignés += 5;
        }
        break;

    default:
        break;
    }
}


void collecter_ressources(Hotel_de_ville hdv)
{

    for (int i = 0; i < hdv.total_scierie; i++)
    {
        if (hdv.liste_scierie[i].activated)
        {
            hdv.bois += hdv.liste_scierie[i].production_j;
           
        }
    }

    for (int i = 0; i < hdv.total_raffinerie; i++)
    {
        if (hdv.liste_raffinerie[i].activated)
        {
            hdv.mat_noire += hdv.liste_raffinerie[i].production_j;
        }
    }
    for (int i = 0; i < hdv.total_mine; i++)
    {
        if (hdv.liste_mine[i].activated)
        {
            hdv.or += hdv.liste_mine[i].production_j;
        }
    }
}