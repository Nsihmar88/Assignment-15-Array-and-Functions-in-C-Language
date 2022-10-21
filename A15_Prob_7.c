// Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>

int total_duplicate_values(int[],int);

int main ()
{
    int array[1000], size_of_array,i,result;

    printf("\n*_*_*_*_* This Program is designed for Array of size Between 1 to 1000 *_*_*_*_*\n");
    printf("\nEnter Size of Array You Want To Creat: ");
    scanf("%d",&size_of_array);

    printf("\nEnter %d Elements: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array[i]);

    result=total_duplicate_values(array, size_of_array);
    if (result!=0)
        printf("\nThere are %d Duplicate Values In The Array.",result);
    else
        printf("\nNo Duplicate Values In The Array.");
    
    return 0;
}

int total_duplicate_values(int adv[],int size_of_array)
{
    int i,j,count=0;
    
    for (i = 0; i < size_of_array-1; i++)
    {
        for (j = i+1; j < size_of_array; j++)
        {
            if (adv[i]==adv[j])
                count ++;       
        }
    }

    printf("Array Entered by user: Array[ ");
    for(i = 0; i < size_of_array; i++)
        printf("%d ",adv[i]);
    printf("]");
    
    if (count>=1)
        return(count);
    else
        return(0);
}