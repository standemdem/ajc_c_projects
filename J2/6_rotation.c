#include <stdio.h>

int GetInput()
{
    int digit;
    printf("Enter a number: ");
    scanf("%d", &digit);
    printf("\n");
    return digit;
}

int main()
{
    // initialize variables
    int arr[8];
    int arr_size=8;
    int rotated_arr[8];

    // Create Array
    for (int index = 0; index < arr_size; index++)
    {
        arr[index]=GetInput();
    }
    // Rotate Array
    for (int i = 0; i < arr_size; i++)
    {
        if (i==0)
        {
            rotated_arr[i] = arr[arr_size-1];
        }
        else
        {
            rotated_arr[i] = arr[i-1];
        }
    }
    // Display Rotated Array
    printf("{");
    for (int i = 0; i < arr_size; i++)
    {
        
        printf("%d, ", rotated_arr[i]);
    }
    printf("}");
    
    
    return 0;
}