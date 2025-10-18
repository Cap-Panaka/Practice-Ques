/*
Write a program in C that stores and manages employee information. The program must handle the following data for each employee:
- Employee ID
- Name (maximum 50 characters)
- Salary
- Mobile number
Implement the following features:
I. Structure Definition and Menu [1 mark]
- Create a structure with tag-name Employee containing the above fields.
- Provide a menu with four choices:
- Input
- Display
- Delete
- Exit
II. Input Functionality [3 marks]
- Allow the user to input one employee’s information at a time.
- Limit the total number of employees to 15.
- If the limit is reached, display: "No Sufficient Storage".
III. Display Functionality [3 marks]
- Sort and display all employee records in ascending order of salary.
IV. Delete Functionality [2 marks]
- Allow the user to delete an employee record by entering the employee ID.
V. Exit Condition [1 mark]
- The program should continue running until the user selects the exit option.



*/

#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[50];
    int salary;
    char mob[13];
};
int main()
{
    struct Employee hehe[100];

    int choice,n=0;
    while(1)
    {
        printf("---Yousuf Management---\n");
        printf("1.Input\n");
        printf("2.Display\n");
        printf("3.Delete\n");
        printf("4.Exit\n");
        printf("Enter bro: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
            if(n>15)
            {
                printf("Not enough memery\n");
            }
            else
            {
                printf("Enter employee ID: ");
                scanf("%d",&hehe[n].id);
                getchar();

                //printf("Enter nickname: ");
                printf("Name: ");

                gets(hehe[n].name);
              //scanf("%s",hehe[n].name);
                printf("Enter salary: ");
                scanf("%d",&hehe[n].salary);
                printf("Enter mobile number: ");
                scanf("%s",&hehe[n].mob);
                n++;
                printf("Success!\n");

            }

            break;
            }
        case 2:
        {
            if(n==0)
            {
                printf("No data!");
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=i+1; j<n; j++)\
                    {
                        if(hehe[i].salary>hehe[j].salary)
                        {
                            struct Employee temp=hehe[i];
                            hehe[i]=hehe[j];
                            hehe[j]= temp;
                        }
                    }
                }
            }

            printf("RECORDS: \n");
            for(int i=0; i<n; i++)
            {
                printf("Employee NO.%d\n",i+1);
                printf("ID: %d\nNAME: %s\nSALARY: %d\nMOB: %s\n",hehe[i].id,hehe[i].name,hehe[i].salary,hehe[i].mob);

            }

            break;

        }


        case 3 :
        {
            if(n==0)
            {
                printf("No data delete\n");
            }
            else
            {
                int id,found=0;
                printf("ENter employee id to delete: ");
                scanf("%d",&id);

                for(int i=0; i<n; i++)
                {
                    if(hehe[i].id==id)
                    {
                        for(int j=i; j<n-1; j++)
                        {
                            hehe[j]=hehe[j+1];
                        }
                        n--;
                        found=1;
                        printf("Operation Successful!!!\n");
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Emplyee id not found!\n");
                }






            }
            break;
        }

        case 4:
        {
            printf("GOODBYE! HAVE A LOVELY DAY!!!");
            return 0;

            default:
                printf("Invalid Choice! Try again!");



            }
        }
    }
    return 0;

}


