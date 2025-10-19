/*In statistics, the median is the middle number in a sorted list of numbers.
- If the list has an odd number of elements, the median is the middle number.
- If the list has an even number of elements, the median is calculated by taking the average of the two middle numbers.
Write a C program that allows the user to enter N numbers where N is input from the user. Then, create a user-defined function that receives those numbers as an argument, calculates the median, and returns it. The main function should print the median.
N= 9
1 2 4 5 40 9 8 7 6
6.00
*/
#include<stdio.h>

float hehe(int ar[],int n )
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
        //printf("%d ",ar[i]);

    }
    if(n%2==1) return ar[n/2];
    else return (ar[n/2-1]+ar[n/2])/2.0 ;
}

int main()
{
    int num;
    printf("N= ");
    scanf("%d",&num);
    int br[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&br[i]);
    }
    
    float med=hehe(br,num);
    
    printf("%.2f",med);
}
