//finding area and circumference of the circle
#include<stdio.h>
#define PI 3.14
void main()
{
    int r; float a,c;
    printf("enter the value for Radius of circle:");
    scanf("%d",&r);
    a=PI*pow(r,2);
    c=2*PI*r;
    printf("Area of the circle is %.2f\n",a);
    printf("Circumference of the circle is %.2f",c);
    return 0;
}
