#include<stdio.h>
int main()
{
    /*Finding the interest by taking the values of P,R,N from the user
    there P=Principal amount, R= Rate of interest, N=time period in years,I=Interest
    */

    float P,R,N,I;
    printf("Enter P:");
    scanf("%f",&P);
    printf("Enter R:");
    scanf("%f",&R);
    printf("Enter N:");
    scanf("%f",&N);
    I=P*R*N/100;
    printf("Interest is %.2f",I);
    return 0;
}