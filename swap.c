#include <stdio.h>
int main()
{
    // Swap 2 values using temporary variable
    int a,b,temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped values are a=%d and b=%d",a,b);
    return 0;
}   