#include<stdio.h>
#define PI 3.14
void main()
{
    const int a=14;
    int b;
    float c;
    printf("enter the value for b:");
    scanf("%d",&b);
    c=(a*PI)/b;
    printf("%.2f",c);
}
