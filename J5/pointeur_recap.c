#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_copy(char *src, char *desti)
{
    for (int i = 0; i < strlen(src); i++)
    {
        desti[i]=src[i];
    }
    return desti;
}

// Échange de deux nombres: 
// Écrivez une fonction echanger qui prend en argument deux pointeurs vers des entiers 
// et qui échange les valeurs de ces entiers. Testez cette fonction dans le main.


void *echanger(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("%d %d \n", *ptr1, *ptr2);
}

// Inversion d'une chaîne: Écrivez une fonction qui prend en argument un pointeur vers une
//  chaîne de caractères et inverse cette chaîne en utilisant des pointeurs.

void *invert( char *chain)
{
    int len_chain = strlen(chain);
    for (int i = 0; i < len_chain / 2; i++)
    {
        char temp = chain[i];
        chain[i] = chain[len_chain -i -1];
        chain[len_chain-i -1] = temp;
    }
}
// Longueur d'une chaîne: Sans utiliser la fonction strlen de la bibliothèque standard, 
// écrivez une fonction qui détermine la longueur d'une chaîne de caractères en utilisant des pointeurs.

int string_length(char *chain)
{
    int count=0;
    for (int i = 0; chain[i]!= '\0'; i++)
    {
        count++;
    }
    return count;
}

// Recherche d'un caractère: Écrivez une fonction qui prend en entrée une chaîne de caractères et un caractère. 
// La fonction doit renvoyer un pointeur vers la première occurrence du caractère dans la chaîne 
// ou NULL si le caractère n'est pas présent.

char * point_to_char(char *chain, char letter)
{
    int count = 0;
    for (int i = 0; chain[i] != '\0'; i++)
    {
        if (chain[i] == letter)
        {
            printf("Here is the letter [%c] at position %d of string %s \n", chain[i], count, chain);
            return &chain[i];
        }
        count += 1;
    }
    return NULL;
}

// Somme d'un tableau: Écrivez une fonction qui calcule et renvoie 
// la somme des éléments d'un tableau d'entiers en utilisant des pointeurs.


int sum_of_table_elems(int *ptr, int size)
{
    int acc = 0;
    
    for (int i = 0; i < size; i++)
    {
        acc += ptr[i];
    }
    return acc;
}

// Copie d'un tableau: Écrivez une fonction qui copie 
// le contenu d'un tableau d'entiers dans un autre tableau en utilisant des pointeurs.
int *copy_int_table(int *source, int *destination, int size)
{
    int temp;

    for(int i = 0; i < size; i++)
    {
        temp = source[i];
        source[i] = destination[i];
        destination[i] = temp;
    }
}

// Tri d'un tableau: Utilisez des pointeurs pour écrire une fonction qui 
// trie un tableau d'entiers en ordre croissant.
int *sort_table(int *table, int size)
{
    int i = size;
    int temp;
    if(i=0){
        return table;
    }
    else if(table[i]<table[i-1])
    {
        temp = table[i];
        table[i] = table[i-1];
        table[i-1] = table[i];
        return sort_table(table, (size - 1));
    }
}

int main()
{
    int ptra = 2; 
    int ptrb = 4;
    char letter1 = 'Z';
    char letter2 = 'S';
    char *teststring = "Stanislas";
    char *stringToRevert = malloc(sizeof(char)*strlen(teststring));
    string_copy(teststring, stringToRevert);
    printf("%s \n", stringToRevert);
    echanger(&ptra, &ptrb);
    invert(stringToRevert);
    printf("reverted string: %s \n", stringToRevert);
    printf("length of string: %d \n", string_length(teststring));
    printf("pointer to first occurence of %c: %p\n", letter1,  point_to_char(stringToRevert, letter1));
    printf("pointer to first occurence of %c: %p\n", letter2,  point_to_char(stringToRevert, letter2));

    int table_of_ints[4] = {1, 2, 3, 4};
    size_t size = sizeof(table_of_ints)/sizeof(table_of_ints[0]);

    printf("size : %d \n", size);
    printf("the sum is : %d\n", sum_of_table_elems(table_of_ints, size));

    int table_1[5] = {1, 2, 3, 4, 5};
    
    size_t table_1_size = sizeof(table_1)/sizeof(table_1[0]);
    printf("taille : %d\n", table_1_size);

    int *table_2 = malloc(sizeof(int) * table_1_size);
    copy_int_table(table_1, table_2, table_1_size);
    for (int i = 0; i < table_1_size; i++)
    {
        printf("%d ", table_2[i]);
    }
    

    free(table_2);
    free(stringToRevert);
    return 0;
}