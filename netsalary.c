#include<stdio.h>
int main()
{
    int bs,da,hrs,pf,grs,netsalary;
    printf("Enter your basic Salary");
    scanf("%d",&bs);
    da = (bs*25)/100;
    hrs = (bs*15)/100;
    grs = bs+hrs+da;
    pf = (grs*10/100);
    netsalary = grs-pf;
    printf("\n Net Salary is: %d", netsalary);
    return 0;
}