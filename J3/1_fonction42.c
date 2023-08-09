#include <stdio.h>

void fonction42(int *nb)
{
    *nb=42;
}

int main()
{
    int nb1=2;
    printf("Adresse: %p\n", &nb1);
    fonction42(&nb1);
    printf("Apres fonction: %d\n", nb1);
    printf("Adresse après fonction: %p\n", &nb1);

    return 0;
}