# include <stdio.h>

int GetInput()
{
    int digit;
    printf("Enter a number\n");
    scanf("%d", &digit);
    return digit;
}

int main()
{
    int even_arr[5];
    int odd_arr[5];
    int size1 = 5;
    int size2 = 10;
    int fused_arr[10];
    // create even array
    printf("Even\n");
    for (int index = 0; index < size1; index++)
    {
        even_arr[index] = GetInput();
    }
    
    // create odd array
    printf("Odd\n");
    for (int index = 0; index < size1; index++)
    {
        odd_arr[index] = GetInput();
    }
    // fuse odd and even
    int even=0;
    int odd=0;
    for (int index = 0; index < size2; index++)
    {
        if ((index+2)%2==0)
        {
            fused_arr[index] = even_arr[even];
            even++;
        }
        else
        {
            fused_arr[index] = odd_arr[odd];
            odd++;
        }
    }
    
    // display fused array
    for (int i = 0; i < size2; i++)
    {
        printf("%d -", fused_arr[i]);
    }
    printf("\n");


    return 0;
}