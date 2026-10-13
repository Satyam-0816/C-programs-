#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter temprature in F:");
    scanf("%f",&F);
        C=(F-32)*5/9;
    printf("Temprature in C is %.2f",C);
    return 0;
}
