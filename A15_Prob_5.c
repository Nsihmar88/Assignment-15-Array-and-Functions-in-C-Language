/*  Write a function to find the first occurrence of adjacent duplicate values in the array. 
    Function has to return the value of the element.
*/
#include<stdio.h>

int adjacent_duplicate_values(int[],int);

int main ()
{
    int array[1000], size_of_array,i,result;

    printf("\n*_*_*_*_* This Program is designed for Array of size Between 1 to 1000 *_*_*_*_*\n");
    printf("\nEnter Size of Array You Want To Creat: ");
    scanf("%d",&size_of_array);

    printf("\nEnter %d Elements: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array[i]);
    printf("Array Entered by user: Array[ ");

    for(i = 0; i < size_of_array; i++)
        printf("%d ",array[i]);
    printf("]");

    result=adjacent_duplicate_values(array, size_of_array);
    if (result!=0)
        printf("\nThe first occurrence of adjacent duplicate values in the array is %d.",result);
    else
        printf("\nNo adjacent duplicate values in the array.");
    
    return 0;
}

int adjacent_duplicate_values(int adv[],int size_of_array)
{
    int i;
    
    for (i = 0; i < size_of_array-1; i++)
    {
        if (adv[i] == adv[i+1])
        {
            return(adv[i]);
            break;
        }
    }
    if(i == size_of_array-1)
        return (0);
}