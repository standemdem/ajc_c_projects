#ifndef FUNC_H
#define FUNC_H

    #include "lib.h"
    #include "struct.h"

    Hotel_de_ville initialisation_jeu();
    void afficher_etat_village(Hotel_de_ville hdv);
    void afficher_menu();
    void afficher_choix_assignation();
    void afficher_ecran_construction();
    void afficher_ne_rien_faire();
    void assigner_villageois(Hotel_de_ville hdv, int choix);
    void collecter_ressources(Hotel_de_ville hdv);
    void creer_batiment(Hotel_de_ville hdv, int numero_batiment);
#endif