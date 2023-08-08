# include <stdio.h>

// EXO 2 SUM and MEAN

int GetInput()
{
    int digit;
    printf("Enter a number\n");
    scanf("%d", &digit);
    return digit;
}

int main()
{
    // EXO 2 SUM AND MEAN
    int sizeOfArr = 5;
    int arrayOfNums[5];

    for (int i = 0; i< sizeOfArr; i++)
    {
        arrayOfNums[i]= GetInput();
    }

    // sum
    int sum=0;
    for (int i = 0; i <sizeOfArr; i++)
    {
        sum = sum+arrayOfNums[i];
    }
    printf("La somme des éléments du tableau est: %d\n", sum);

    // mean
    int mean = sum/sizeOfArr;
    printf("La moyenne des éléments du tableau est: %d\n", mean);
    

    return 0;
}