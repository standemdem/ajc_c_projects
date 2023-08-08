# include <stdio.h>

int GetInput()
{
    int digit;
    printf("Enter a number\n");
    scanf("%d", &digit);
    return digit;
}

int main(){
    int i=0;
    int size=7;
    int temp_index = size-1;
    int arrOfNums[size];
    int revertArrOfNum[size];
    
    // fill array with input nums
    for (i; i<size; i++)
    {
        arrOfNums[i]=GetInput();
    }
    // invert array
    for (int index = 0; index < size; index++)
    {
        revertArrOfNum[index]=arrOfNums[temp_index];
        printf("%d\n",revertArrOfNum[index]);
        temp_index--;
    }

    return 0;

    
}