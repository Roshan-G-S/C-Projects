#include<stdio.h>
void main()
{
    int a,y;
    printf("enter the values for a:\n");
    scanf("%d",&a);
    y=(a%20==1||a%20==2)?printf("Naveen"):printf("Roshan");
}
