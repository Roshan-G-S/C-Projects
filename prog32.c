#include<stdio.h>
void main()
{
    int a,b,y;
    printf("enter the values for a and b:\n");
    scanf("%d%d",&a,&b);
    y=(a==b)?printf("%d",(a+b)*3):printf("%d",a+b);
}
