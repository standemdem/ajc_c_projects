# include <stdio.h>

int main()
{
    int tableOfNums[10];
    for (int i = 0; i <= 10; i++)
    {
        tableOfNums[i]=i+1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d",tableOfNums[i]);
    }
}