#include<stdio.h>
int main()
{
    float Min,Hr;
    printf("Enter Hour:");
    scanf("%f",&Hr);
    Min=60*Hr;
    printf("Min is %.2f",Min);
    return 0;
}