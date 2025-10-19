/*Write a C program to extract all digits from a given string taken from user input and show the sum of those digits.
 
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    int sum=0,i;
    printf("Enter a sting: ");
    gets(str);
    
    for(i=0;i<strlen(str); i++)
    {
        if(str[i]>='0' && str[i] <='9')
        {
            sum+=str[i]-'0';
        }
    }
    printf("Sum= %d",sum);
}



