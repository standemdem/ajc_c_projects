#include <stdio.h>
#include <stdlib.h>
// Objectif : Écrire un programme en C qui permet de gérer les notes d'une classe. 
// Le programme doit avoir les fonctionnalités suivantes :

// Saisie des notes : L'utilisateur doit être en mesure de saisir un nombre indéfini de notes 
// (comprises entre 0 et 20) jusqu'à ce qu'il décide d'arrêter la saisie (par exemple, en entrant -1).

// Calcul de la moyenne : Une fois toutes les notes saisies, le programme doit afficher 
// la moyenne de ces notes.

// Affichage des notes supérieures à la moyenne : Le programme doit ensuite afficher 
// toutes les notes qui sont supérieures à la moyenne.

// Recherche d'une note : L'utilisateur doit pouvoir rechercher une note spécifique 
// et le programme doit lui dire si cette note a été saisie ou non.

int get_input()
{
    int input;
    printf("Please enter a note between 0 and 20 (-1 to exit): \n");

    scanf("%d\n", &input);
    return input;
}

float get_mean(int *ptr)
{
    int counter = 0;
    int table_length = sizeof(ptr);
    printf("aaa %d\n", table_length);
    for (int i = 0; i < table_length; i++)
    {
        counter = counter + ptr[i];
    }
    return counter / table_length;    
}

void display_higher_than_mean(int *ptr, float mean)
{
    for (int i = 0; i < sizeof(ptr); i++)
    {
        if(ptr[i]>= mean){
            printf("%d, ", ptr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int user_input;
    int size = 2;
    int acc=0;
    int temptable[50];
    int *score_array = malloc(sizeof(int)* size);

    printf("Bienvenu dans school Manager\n");
    while (user_input != -1)
    {
        user_input= get_input();
        if (user_input >= -1 && user_input<=20)
        {
            temptable[acc] = user_input;
            acc ++;
            printf("contenu du tableau: ");
            for (int i = 0; i < acc; i++)
            {
                printf("%d ",temptable[i]);
            }
            printf("\n ------------ \n");
        }
        else if (user_input == -1)
        {
            break;
        }
        else if(user_input== -2)
        {
            printf("mean = %d\n", get_mean(temptable));
        }
        
        
        

        
    }
    


    return 0;
}