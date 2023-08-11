#ifndef STRUCT_H
#define STRUCT_H
    
typedef struct 
{
    char* Nom;
    int Age;
    float Note;

}Etudiant_S;

typedef struct
{
    int x;
    int y;
}Point;

typedef struct
{
    int jour;
    int mois;
    int annee;
}Dates;

typedef struct 
{
    char* titre;
    char* auteur;
    int prix;
}Livres;

#endif