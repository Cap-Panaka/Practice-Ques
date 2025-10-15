//Write a C program that dynamically allocates memory for an array of 10 integers, takes user input, and reverses the array.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,i;
    arr=(int *)malloc(10*sizeof(int));
    
    if(arr==NULL)
    {
        printf("FAILURE!!!!(Asian mode)");
    }
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Reversed array: ");
    for(i=10-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    
    free(arr);
    
}
