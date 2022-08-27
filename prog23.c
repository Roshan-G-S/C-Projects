#include<stdio.h>
void main()
{
    int days,months,week,years;
        printf("enter the number of days:\n");
        scanf("%d",&days);
        years= days/365;
        days=days%365;
        months= days/31;
        days=days%30;
        week = days/7;
        printf("%d years\t %d months\t%d week\t %d days",years,months,week,days);
}
