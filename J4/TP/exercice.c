#include "struct.h"
#include "lib.h"
// Exercice 1: Définition et Initialisation

// Définissez une structure Etudiant qui contient les éléments suivants:

//     Nom (chaîne de caractères)
//     Age (entier)
//     Note (flottant)

void Exo1()
{
    Etudiant_S stan;
    stan.Age = 36;
    stan.Nom = "de Montmarin";
    stan.Note = 20; 
    printf("je m'appelle %s j'ai %d et j'ai eu %.2f sur 20\n", stan.Nom, stan.Age, stan.Note);

    Etudiant_S *etudiants = malloc(sizeof(Etudiant_S)*1);
    etudiants[0].Age = 36;
    etudiants[0].Nom = "Stanislas de Montmarin";
    etudiants[0].Note = 20;
    printf("je m'appelle %s j'ai %d et j'ai eu %.2f sur 20\n", etudiants->Nom, etudiants->Age, etudiants->Note);

    free(etudiants);
}

// Exercice 2: Accès aux Membres
// Écrivez un programme qui crée une structure Point contenant deux entiers x et y. 
// Demandez à l'utilisateur de saisir les valeurs de x et y, puis imprimez-les.

void Exo2()
{
    int x;
    int y;
    printf("Entre un entier x ");
    scanf("%d", &x);
    printf("Entre un entier y ");
    scanf("%d", &y);

    Point p;
    p.x=x;
    p.y=y;
    printf("x= %d y= %d\n", p.x, p.y);

}
// Exercice 3: Utilisation de Pointeurs avec les Structures

// Définissez une structure Date avec les champs jour, mois et année. Écrivez une fonction 
// qui prend un pointeur vers une date et modifie la date en ajoutant un jour.

void Exo3(Dates *date){
    date->jour = date->jour +1;
}

// Exercice 4: Tableaux de Structures

// Définissez une structure Livre avec le titre, l'auteur et le prix. 
// Créez un tableau de cette structure pour stocker 5 livres 
// et initialisez-le avec des valeurs de votre choix. Imprimez ensuite les détails de chaque livre.
Livres CreateLivre(char *titre, char *auteur, int prix)
{
    Livres livre;
    livre.titre = titre;
    livre.auteur = auteur;
    livre.prix = prix;
    return livre;
};
void Exo4()
{

    Livres *bibliotheque = malloc(sizeof(Livres) * 5);

    bibliotheque[0]= CreateLivre("Harry Potter 1", "JK Rowling", 20);
    bibliotheque[1]= CreateLivre("Harry Potter 2", "JK Rowling", 20);
    bibliotheque[2]= CreateLivre("Harry Potter 3", "JK Rowling", 20);
    bibliotheque[3]= CreateLivre("Harry Potter 4", "JK Rowling", 20);
    bibliotheque[4]= CreateLivre("Harry Potter 5", "JK Rowling", 20);
    printf("%s\n", bibliotheque[4].titre);
    free(bibliotheque);
}