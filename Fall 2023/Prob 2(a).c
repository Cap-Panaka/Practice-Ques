/*
Question 02 [Answer any Three Questions] [30 marks]
a. [10 marks]
Write a C program where the user will provide two integers n and m which will indicate the size of two arrays, then take inputs from a user and save the values in the two arrays (A and B). Assuming A and B as two different sets, your program will output the union set operation (A ∪ B). If the output is the empty set, then print -1, otherwise print the set output.
Sample Input  Sample Output
n = 3        | 1 2 3 4 5  
A = 1 2 3    |  
m = 2        |  
B = 3 4 5    |  
-------------------------------
n = 0        | -1  
m = 0        |
*/


#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("n= ");
    scanf("%d",&n);
    
    int ar[n];
    if(n==0)
    {}
    else{
    printf("A = ");
    for(i=0;i<n;i++)
    {
       
        scanf("%d",&ar[i]);
        
    }
    }
    
    printf("m= ");
    scanf("%d",&m);
    
    int ar1[m];
    if(m==0)
    {}
    else{
    printf("B = ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&ar1[i]);
    }
    }
    if(n==0 && m==0)
    {
        printf("-1");
        return 0;
    }
    
    
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    
    for(i=0;i<m;i++)
    {
        int flag=0;
        for(j=0;j<n;j++)
        {
            if(ar1[i]==ar[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
    {
        printf("%d ",ar1[i]);
    }
    }
    printf("\n");
    
}
