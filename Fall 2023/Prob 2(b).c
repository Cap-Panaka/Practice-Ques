/*Write a program that takes two string inputs and concatenates them in such a way that there will be a space between the two strings, and reverse each word of that concatenated string.
Sample Input:
String 1: Hello CSE
String 2: Students
Sample Output:
olleH ESC stnedutS
*/

#include<stdio.h>
#include<string.h>
int main()
{

    char str[1001],str1[1001];
    printf("String 1: ");
    gets(str);
    printf("String 2: ");
    gets(str1);

    strcat(str," ");
    strcat(str,str1);
   // puts(strrev(str));
   int i=0,start=0;
   while(1)
   {

       if(str[i] == ' ' || str[i]=='\0')
       {

           int end=i-1;
           while (start<end)
           {

               char temp = str[start];
               str[start]=str[end];
               str[end]=temp;
               start++;
               end--;
           }
           if(str[i]=='\0')
            break;
           start=i+1;

       }
       i++;
   }
   printf("Output: %s\n" , str);
   return 0;

}

/* XXXX (not like this -,-)
output:  ESC olleH stnedutS XXXX


#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],str1[1001];
    printf("String 1: ");
    gets(str);
    strrev(str);
    printf("String 2: ");
    gets(str1);
    strrev(str1);

    strcat(str," ");
    strcat(str,str1);

    puts(str);



}

*/
