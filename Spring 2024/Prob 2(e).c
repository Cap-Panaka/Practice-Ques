/* Output :: Nij goroje dekhe ne -,- */

#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};
int main() 
{
    struct employee e[100];
    float total=0,avg=0;
    int i;
    for(i=0;i<100;i++)
    {
        printf("Employee %d :\n",i+1);
        printf("Name: ");
        scanf("%s",&e[i].name);
        printf("Id: ");
        scanf("%d",&e[i].id);
        printf("Salary: ");
        scanf("%f",&e[i].salary);
        
        total+=e[i].salary;
        
    }
    
    avg=total/100;
    printf("Average: %f",avg);
    
    
}


