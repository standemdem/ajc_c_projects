#include <stdio.h>
// exo1

int nbi = 2;
float nbf = 2.5;
double nbd = 2.5;
char letter = 'a';

int addition(int nb1, int nb2)
{
    return nb1 + nb2;
}

// exo2

int CharToAscii(char letter)
{
    return letter;
}

// exo3
void BoucleFor()
{
    printf("Boucle for: ");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void BoucleWhile()
{
    int i=0;
    printf("Boucle while: ");
    while (i!=20)
    {
        printf("%d ", i);
        i = i+2;
    }
    printf("\n");
}
// exo 4
void DrawRectangle(int lines, int columns)
{
    for (int i = 0; i < lines; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}

// exo 5
void DisplayMultiplicationTable(int nb, int table_size)
{
    for ( int i = 1; i <= table_size; i++)
    {
        int result = nb * i;
        printf("%d x %d = %d\n", nb, i, result);
    }
    
}

int main()
{
    //exo1
    printf("%d\n", nbi);
    printf("%f\n", nbf);
    printf("%lf\n", nbd);
    printf("%c\n", letter);
    //exo2
    printf("%d\n",CharToAscii('a'));
    //exo3
    BoucleFor(); 
    BoucleWhile();
    //exo4
    DrawRectangle(5,7);
    //exo5
    for (int i = 2; i <= 5; i++) 
    {
        DisplayMultiplicationTable(i, 10);
    }
    return 0;
}