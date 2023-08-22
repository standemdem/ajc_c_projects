#ifndef STRUCT_H
#define STRUCT_H

    typedef struct 
    {
        int level; // niveau de l'hotel de ville
        Scierie *liste_scierie;
        Mine *liste_mine;
        Raffinerie *liste_raffinerie;
        int total_scierie;
        int total_mine;
        int total_raffinerie;
        int bois, or, mat_noire; // compteur ressources
        int max_peons; // Maximum de peons disponibles à un lvl donné
        int peons_disponibles; // total de peons au chomage
        int total_soldats; 
    }Hotel_de_ville;
    
    typedef struct 
    {
        int cout_or;
        int cout_bois;
        int cout_mat_noire;
        int production_j;
        int peons_necessaires;
        int peons_assignés;
    }Scierie, Mine, Raffinerie;
    
#endif