// Write a function in C to print all unique elements in an array.

#include<stdio.h>

int all_unique_elements(int[],int);

int main ()
{
    int array[1000], size_of_array,i;

    printf("\n*_*_*_*_* This Program is designed for Array of size Between 1 to 1000 *_*_*_*_*\n");
    printf("\nEnter Size of Array You Want To Creat: ");
    scanf("%d",&size_of_array);

    printf("Enter %d Elements: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array[i]);

    all_unique_elements(array, size_of_array);
    
    return 0;
}

int all_unique_elements(int aue[],int size_of_array)
{
    int i,j;

    printf("\nArray Entered by user: [ ");
    for(i = 0; i < size_of_array; i++)
        printf("%d ",aue[i]);
    printf("]");
    
    printf("\nUnique Elements in Array are: [ ");
    for(i = 0; i < size_of_array; i++)
    {
        for (j = 0; j < size_of_array; j++)
        {
            if (aue[i]==aue[j] && (i!=j))
                break;                    
        }
        if (j==size_of_array)
            printf("%d ",aue[i]);    
    }
    printf("]\n\n");
}