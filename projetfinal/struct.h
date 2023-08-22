#ifndef STRUCT_H
#define STRUCT_H

    typedef struct 
    {
        int level; // niveau de l'hotel de ville
        scierie *liste_scierie;
        mine *liste_mine;
        raffinerie *liste_raffinerie;
        int total_scierie;
        int total_mine;
        int total_raffinerie;
        int bois, oir, mat_noire; // compteur ressources
        int max_peons; // Maximum de peons disponibles à un lvl donné
        int peons_disponibles; // total de peons au chomage
        int total_soldats; 
    }hotel_de_ville;
    
    typedef struct 
    {
        int cout_or;
        int cout_bois;
        int cout_mat_noire;
        int production_j;
        int peons;
    }scierie, mine, raffinerie;
    
#endif