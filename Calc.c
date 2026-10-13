#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum is %d\n",a+b);
    printf("Sub is %d\n",a-b);
    printf("Product is %d\n",a*b);
    if(b!=0)
    printf("Division is %d\n",a/b);
    else
    printf("Division is undefined");
}