#include<stdio.h>
void main()
{
    int a,b,x,y;
    printf("enter the values for a and b:\n");
    scanf("%d%d",&a,&b);
    x=a+b;
    y=(x==30||a==30||b==30)?printf("True"):printf("False");
}


