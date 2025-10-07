/*In statistics, the mode of a group of numbers is the one that occurs the most.
For example, given the list:
1, 2, 4, 5, 5, 4, 3, 2, 2, 6, 9
the mode is 2, because it occurs maximum times.

Now write a C program that allows the user to enter 20 numbers and then find and display the mode of those numbers.

Input:1 2 3 4 5 25 5 2 2 6 2 7 28 2 8 9 10 11 12 2
Output:Mode is 2

*/

#include<stdio.h>
int main() 
{
    int i,j;
    int ar[20];
    for(i=0;i<20;i++)
    {
        scanf("%d",&ar[i]);
    }
    int count=0,max=ar[0],mode;
    for(i=0;i<20;i++)
    {
        int count=0;
        for(j=0;j<20;j++)
        {
            if(ar[j]==ar[i])
            {
                count++;
            }
            
        }
        
        if(max<count)
        {
            max=count;
            mode=ar[i];
            
        }
        
    }
    
    printf("Mode is : %d",mode);
    
}
