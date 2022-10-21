// Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>

int smallest_number (int[],int);

int main ()
{
    int array[10],result;
    result=smallest_number(array,10);    
    printf("\nSmallest Number is: %d ",result);    
    
    return 0;
}

int smallest_number (int x[],int num)
{
    int i,S_num;
    
    printf("\nEnter %d Numbers: ",num);
    for (i = 0; i < 10; i++)
        scanf("%d",&x[i]);

    S_num=x[i];
    for (i = 0; i < 10; i++)
    {
        if (S_num > x[i+1])
            S_num = x[i+1];      
    }
    return(S_num);
}