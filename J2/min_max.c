#include <stdio.h>

int GetInput()
{
    int digit;
    printf("Enter a number\n");
    scanf("%d", &digit);
    return digit;
}

int main(){
    int i=0;
    int arrOfNums[10];
    // fill array with input nums
    while (i<10)
    {
        arrOfNums[i]=GetInput();
        i++;
    }
    int max_input = arrOfNums[0];
    int min_input = arrOfNums[0];
    
    // find min max
    for (int j =1;j < 10; j++)
    {
        if (max_input<arrOfNums[j]) max_input=arrOfNums[j];
        if (min_input>arrOfNums[j]) min_input=arrOfNums[j];
    }

    printf("the max is: %d\n",max_input);
    printf("the min is: %d\n",min_input);
    
    
    

    return 0;
}