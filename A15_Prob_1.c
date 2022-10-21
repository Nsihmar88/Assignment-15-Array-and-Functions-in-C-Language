//  Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>

int greatest_number (int[],int);

int main ()
{
    int array[10],result;
    result=greatest_number(array,10);    
    printf("\nGratest Number is: %d ",result);    
    
    return 0;
}
int greatest_number (int x[],int num)
{
    int i,g_num;
    
    printf("\nEnter %d Numbers: ",num);
    for (i = 0; i < 10; i++)
        scanf("%d",&x[i]);
    
    g_num=x[i];
    for (i = 0; i < 10; i++)
    {
        if (g_num < x[i+1])
            g_num = x[i+1];      
    }
    return(g_num);
}