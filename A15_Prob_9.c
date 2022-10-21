//  Write a function in C to merge two arrays of the same size sorted in descending order.

#include<stdio.h>

void merge_two_arrays(int[],int[],int);

int main ()
{
    int array1[1000],array2[1000],size_of_array,i;

    printf("\n*_*_*_*_* This Program is designed for Array of size Between 1 to 1000 *_*_*_*_*\n");
    printf("\nEnter Size of Array You Want To Creat: ");
    scanf("%d",&size_of_array);
    
    printf("Enter %d Elements of Array 1: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array1[i]);
    printf("Enter %d Elements of Array 2: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array2[i]);
    
    merge_two_arrays(array1, array2, size_of_array);
    
    return 0;
}

void merge_two_arrays(int arr1[], int arr2[], int size_of_array)
{   
    int i=0,j=0,k=0,result[2000];    

    for (k = 0; k < (2*size_of_array); k++)
    {
        if (i>=size_of_array)
        {
            while (k<(2*size_of_array))
            {
                result[k] = arr2[j];
                j++;
                k++;
                if (k==(2*size_of_array))
                {
                    break;
                }                
            }            
        }
        else if (j>=size_of_array)
        {
            while (k<(2*size_of_array))
            {
                result[k] = arr1[i];
                i++;
                k++;
                if (k==(2*size_of_array))
                {
                    break;
                }                
            }            
        }                
        else if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            i++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
        }        
    }
    
    printf("\nResult Array after shorting in descending order: [ ");
    for(k = 0; k<(2*size_of_array);k++)
        printf("%d ",result[k]);
    printf("]");
}
