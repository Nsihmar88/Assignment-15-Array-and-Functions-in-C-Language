//  Write a function in C to count the frequency of each element of an array.

#include<stdio.h>

void frequency_of_element(int[],int);

int main ()
{
    int array1[1000], size_of_array,i;

    printf("\n*_*_*_*_* This Program is designed for Array of size Between 1 to 1000 *_*_*_*_*\n");
    printf("\nEnter Size of Array You Want To Creat: ");
    scanf("%d",&size_of_array);
    
    printf("Enter %d Elements of Array 1: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array1[i]);
    
    frequency_of_element(array1, size_of_array);    
    return 0;
}

void frequency_of_element(int arr1[], int size_of_array)
{   
    int i, j, key=0, result[2000];    

    printf("\nArray Entered by user: [ ");
    for (i = 0; i < size_of_array; i++)
    {
        result[i]=arr1[i];
        printf("%d ",arr1[i]);    
    }
    printf("]");
    
    for (i = 0; i < (size_of_array-1); i++)
    {
        key=1;
        for ( j = i+1; j < size_of_array; j++)
        {
            if (result[i]==result[j])
            {
                key++;
                result[j] = -999999999;
            }
            
        }
        if(result[i]!=-999999999)
        printf("\nfrequency of element %d is %d",result[i],key);
    }
        
}
