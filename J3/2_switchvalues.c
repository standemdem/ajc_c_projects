#include <stdio.h>

// Faire en sorte que les 2 pointeurs échanges leurs valeurs
void SwitchValues(int *val1, int *val2)
{
    int temp= *val1;
    *val1=*val2;
    *val2=temp;
    printf("val1 PF: %d\n val2 PF: %d\n", *val1, *val2 );
}


int main()
{
    int val1 = 20;
    int val2 = 50;
    SwitchValues(&val1, &val2);
    printf("val1 AF: %d\n val2 AF:%d\n", val1, val2);
    return 0;
}