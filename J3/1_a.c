#include <stdio.h>

void change(int a)
{
    a = 5;
    printf("Dans la fonction: %d\n", a);
}

int main()
{
    int a = 0;
    printf("après initialisation: %d\n", a);

    change(a);
    printf("après la fonction %d\n", a);

    return 0;
}