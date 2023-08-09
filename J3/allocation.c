#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1 pointeur de taille long
//2 pointeur de taille int
//3 pointeur de taille 5 int
//4 pointeur de taille char
//5 pointeur de taille "taille de mon prénom", rempli avec mon prénom



int main()
{
    int *ptr1 = malloc(sizeof(long));
    int *ptr2 = malloc(sizeof(int));
    int *ptr3 = malloc(sizeof(int)*5);
    int *ptr4 = malloc(sizeof(char));
    char *name = malloc(sizeof(char) * 9);
    // ptr5 = {'s','t','a','n','i','s','l','a','s','\0'};
    // *name = "stanislas";
    printf("%p - %p - %p - %p - %p", ptr1, ptr2, ptr3, ptr4, name);
    
    
    free(ptr1);
    free(ptr2);
    free(ptr3);
    free(ptr4);
    free(name);

    return 0;
}