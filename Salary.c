#include<stdio.h>
int main()
{
    /* Calculating Net Salary by taking the values of Gross salary,Allowances and Deductions from the user
    */
   float Net_salary,Gross_salary,Allowance,Deduction;
   printf("Enter Gross salary:");
   scanf("%f",&Gross_salary);
   printf("Enter Allowance:");
   scanf("%f",&Allowance);
   printf("Enter Deduction:");
   scanf("%f",&Deduction);
   Net_salary=Gross_salary+Allowance-Deduction;
   printf("Net Salary is %.2f",Net_salary);
   return 0;
}