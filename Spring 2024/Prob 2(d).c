/*
Customer ID: 001 
Customer Name: JAmes
Units Consumed: 800
Amount Charges @BDT 2.00 per unit: 1600.00
Subcharge amount: 240.00
Net AMount Paid BY the Customer: 1840.00
*/

#include<stdio.h>
int main()
{
    int id;
    char name;
    float unit;
    printf("Customer ID: ");
    scanf("%d",&id);
    printf("Customer Name: ");
    scanf("%s",&name);
    printf("Units Consumed: ");
    scanf("%f",&unit);
    float amount=0,hehe=0;
    if(unit<199) {amount=1.20*unit; hehe=1.20;}
    else if(unit >=200 && unit <= 399) {amount=1.50*unit; hehe=1.50;}
    else if(unit>=400 && unit <=599) {amount = 1.80 * unit;hehe= 1.80;}
    else {amount= 2.00 * unit; hehe=2.00;} 
    
    printf("Amount Charges @BDT %.2f per unit: %.2f\n",hehe,amount);
    float subcharge=0,total=0 ;
    if(amount>400)
    {
        subcharge= amount *0.15;
        total=subcharge +amount;
    }
    printf("Subcharge amount: %.2f\n",subcharge);
    printf("Net AMount Paid BY the Customer: %.2f\n",total);
}
