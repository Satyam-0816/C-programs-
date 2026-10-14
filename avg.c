#include<stdio.h>
int main()
{
    // Calculating average of 3 numbers
    int a,b,c;
    float avg;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of 3 numbers is %.2f",avg);
    return 0;
}