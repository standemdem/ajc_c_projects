#ifndef STRUCT_H
#define STRUCT_H

    typedef struct 
    {
        scierie *liste_scierie;
        mine *liste_mine;
        raffinerie *liste_raffinerie;
        int max_peons;
        int peons_disponibles;
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