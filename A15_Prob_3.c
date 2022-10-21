//  Write a function to sort an array of any size. (TSRN)
#include<stdio.h>

void sort_array (int[],int);

int main ()
{
    int array[10],i,num=10; 
    sort_array (array,num);   
    return 0;
}

void sort_array (int x[],int num)
{
    int i,Small_num,j;

    printf("\nEnter %d Numbers: ",num);
    for (i = 0; i < 10; i++)
        scanf("%d",&x[i]);

    for (i = 0; i < num-1; i++)
    {
        for (j = i+1; j < num; j++)
        {
            if(x[i] > x[j])
            {
                Small_num = x[i];
                x[i] = x[j];
                x[j] = Small_num;
            }
        }        
    }
    for (i = 0; i < num; i++)
        printf("%d ",x[i]);
}