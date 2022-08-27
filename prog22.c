#include<stdio.h>
void main()
{
        int x,d,m,weak,y,days;
        printf("enter the number of days:\n");
        scanf("%d",&d);
        weak = d/7;
        m= d/30;
        y= d/365;
        printf("%d weaks\t%d months\t%d years",weak,m,y);
}
