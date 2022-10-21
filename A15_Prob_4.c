/*  Write a function to rotate an array by n position in d direction. 
    The d is an indicative value for left or right. 
    (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, 
    then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
#include<stdio.h>

void Right_Rotation(int[],int,int,int);
void Left_Rotation(int[],int,int,int);

int main ()
{
    int array[1000],i,temp,d_direction,n_Rotation,size_of_array,flag=0;
    
    printf("\n*_*_*_*_* This Program is designed for Array of size Between 1 to 1000 *_*_*_*_*\n");
    printf("\nEnter Size of Array You Want To Creat: ");
    scanf("%d",&size_of_array);

    printf("\nEnter %d Elements: ",size_of_array);
    for (i = 0; i < size_of_array; i++)
        scanf("%d",&array[i]);
    
    printf("\nEnter Number of Rotation: ");
    scanf("%d",&n_Rotation);

    while (flag!=1)
    {
        printf("\n\nSelect The Direction In Which You Want To Rotate Array Elements: ");
        printf("\nOption 1: For Right Rotation Type: 1");
        printf("\nOption 2: For Left RotationType: 2");
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&d_direction);
        
        switch (d_direction)
        {
            case 1:
                Right_Rotation (array, size_of_array, d_direction, n_Rotation);
                flag=1;
                break;
            case 2:
                Left_Rotation (array, size_of_array, d_direction, n_Rotation);
                flag=1;
                break;        
            default:
                printf("\nInvalid Input! Please Select Option 1 or option 2");
                break;
        }
    }    
    return 0;
}

void Right_Rotation(int Right[], int size_of_array, int d_direction, int n_Rotation)
{
    int i,temp;

    printf("Before Rotation: Array[ ");
    for(i = 0; i < size_of_array; i++)
        printf("%d ",Right[i]);
    printf("]");

    while (n_Rotation)
    {
        temp=Right[size_of_array-1];
        for (i = size_of_array-1; i >= 1; i--)
        {
            Right[i]=Right[i-1];
        }
        Right[0]=temp;
        n_Rotation--;
    }

    printf("\nAfter Rotation: Array[ ");
    for(i = 0; i < size_of_array; i++)
        printf("%d ",Right[i]);
    printf("]\n\n");
}

void Left_Rotation(int left[],int size_of_array, int d_direction,int n_Rotation)
{
    int i,temp;

    printf("\nBefore Rotation: Array[ ");
    for(i = 0; i < size_of_array; i++)
        printf("%d ",left[i]);
    printf("]");

    while (n_Rotation)
    {
        temp=left[0];
        for (i = 0; i <= size_of_array-2; i++)
        {
            left[i]=left[i+1];
        }
        left[size_of_array-1]=temp;
        n_Rotation--;
    }
    
    printf("\nAfter Rotation: Array[ ");
    for(i = 0; i < size_of_array; i++)
        printf("%d ",left[i]);
    printf("]\n\n");
}