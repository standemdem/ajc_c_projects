#include <stdio.h>
// Exo1
void ChangePtr1(int *ptr)
{
    *ptr = 50;
    printf("Valeur dans la fonction: %d\n", *ptr);
}
// Exo2
void ChangePtr2(int *ptr)
{
    ChangePtr1(ptr);
}
// Exo3
void ChangePtr3(int *ptr)
{
    ChangePtr2(ptr);
}
// Exo4
void ChangePtr4(int **ptr)
{
    **ptr = 50;
    printf("Valeur dans la fonction: %d\n", **ptr);
}
// Exo5
void ChangePtr5(int **********ptr)
{
    **********ptr=50;
    printf("Valeur dans la fonction: %d\n", **********ptr);
}

// Exo 6



int main()
{
    int num1 = 2;
    int *ptr1 = &num1;
    // Maxipointer
    int *var10=&num1;
    int **var9=&var10;
    int ***var8=&var9;
    int ****var7=&var8;
    int *****var6=&var7;
    int ******var5=&var6;
    int *******var4=&var5;
    int ********var3=&var4;
    int *********var2=&var3;
    int **********var1=&var2;

    char tab1[5]={'t','o','t','o','\0'};
    char tab2[5]={'t','o','t','a','\0'};
    
    printf("Valeur avant la fonction: %d\n", num1);
    //exo 1
    // ChangePtr1(&num1);
    //exo 2
    // ChangePtr2(&num1);
    // printf("Valeur après la fonction: %d\n", num1);
    //exo 3
    // ChangePtr3(&num1);
    // exo4
    // ChangePtr4(&ptr1);
    // Exo 5
    // ChangePtr5(var1);
    printf("Valeur après la fonction: %d\n", num1);
    // Exo6
    printf("%s  -  %s\n", tab1, tab2);
    printf("valeur: %s adresse: %p\n", tab1, &tab1);
    printf("valeur: %s adresse: %p\n", tab2, &tab2);
    // exo 7 inverser le tableau en utilisant les
    return 0;
}