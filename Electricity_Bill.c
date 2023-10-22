#include<stdio.h>
int main()
{
    int units;
    float unitcost,bill,tbill,scharge;
    scanf("%d",&units);
    if(units <= 199)
    {
        unitcost=1.20;
    }
    else if(units >= 200 && units < 400)
    {
        unitcost=1.40;
    }
    else if(units >= 400 && units < 600)
    {
        unitcost=1.60;
    }
    else if(units >= 600 && units < 800)
    {
        unitcost=1.80;
    }
    else
    {
        unitcost=2.00;
    }
    bill=units*unitcost;
    if(bill > 400)
    {
        scharge=bill*0.15;
        tbill=bill+scharge;
    }
    else
    {
        scharge=0;
        tbill=bill;
    }
    printf("Units Consumed: %d
",units);
    printf("Cost per Unit: %.2f
",unitcost);
    printf("Bill: %.2f
",bill);
    printf("Surcharge: %.2f
",scharge);
    printf("Total Amount: %.2f
",tbill);
}