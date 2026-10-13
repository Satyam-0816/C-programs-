#include<stdio.h>
int main()
{
    float R,Area,Circumference;
    printf("Enter Radius of a circle:");
    scanf("%f",&R);
    Area=3.14*R*R;
    Circumference=2*3.14*R;
    printf("Area of circle is %.2f\n",Area);
    printf("Circumference of circle is %.2f\n",Circumference);
    return 0;
}