#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// type de return de la fonction
// void NomDeLaFonction(int arg1, int arg2, int arg3) //nombre et type d'arguments
// {
//     // Différents types de variables
//     int
//     int a = 0;
//     int min = -2137483648;
//     int max = 2137483647;

//     // float
//     float b = 0.0;
//     float min =-3.4E38;
//     float max = 3.4E38;

//     // boolean
//     bool c = 1;
//     bool d = 0;

//     // char
//     char a = "a";
//     char b = "b";
//     char c = "c"; 
//     char x = 67; // C
//     printf("%c \n", x);
// }

int MultiplyByItself(int nb)
{
    return nb * nb;
}

int main() 
{
    // NomDeLaFonction(55, 66, 77);
    printf("%d\n",MultiplyByItself(5));
    return 0;
}