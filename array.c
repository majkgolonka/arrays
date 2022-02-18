#include <stdio.h>
#include <stdlib.h>

int main()
{

    int length,min,max;
    int sum =0;
    int avg = 0;
    int x=0;
    puts("***Program to test array***");
    printf("How long is the array:\n");
    scanf("%i", &length);
    int array[length];
    for (x=0; x<length;x++)
    {
        printf("Enter number %d \n", (x+1));
        scanf("%d", &array[x]);

    }
    //min
    min=array[0];
    for(int i=1; i<length; i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("Minimum: %d\n",min);
    //maks
    max=array[0];
    for(int i=1; i<length; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("Maximum: %d\n",max);
    //average+total
    for (x=0; x<length;x++)
    {
        sum = sum+array[x];
    }
    avg = sum/length;
    printf("Average: %d\n", avg);
    printf("Total: %d\n", sum);
    return 0;
}

