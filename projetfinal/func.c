#include "lib.h"
#include "struct.h"

void afficher_etat_village()
{

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