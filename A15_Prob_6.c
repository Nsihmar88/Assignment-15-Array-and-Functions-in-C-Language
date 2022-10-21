/*  Write a function in C to read n number of values in an array 
    and display it in reverse order.
*/
#include<stdio.h>

int reverse_order(int[],int);

int main ()
{
    int array[1000], size_of_array,i;

    printf("\n*_*_*_*_* This Program is designed for Array of size Between 1 to 1000 *_*_*_*_*\n");
    printf("\nEnter Size of Array You Want To Creat: ");
    scanf("%d",&size_of_array);

    printf("\nEnter %d Elements: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array[i]);

    reverse_order(array, size_of_array);
    
    return 0;
}

int reverse_order(int ro[],int size_of_array)
{
    int i;

    printf("\nArray Entered by user: [ ");
    for(i = 0; i < size_of_array; i++)
        printf("%d ",ro[i]);
    printf("]");
    
    printf("\nArray in reverse order: [");
    for(i = size_of_array-1; i >= 0; i--)
        printf("%d ",ro[i]);
    printf("]\n\n");
}