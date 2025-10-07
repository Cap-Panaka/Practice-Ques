/*
Write a C program for reversing an integer value taken from user input using a loop.
The final reversed value will be an 

Input: 1234
Output: 4321

*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0,digit;
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("%d",rev);
}
