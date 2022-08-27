
#include<stdio.h>
void main()
{
    int a=5,b=12,c=5;
    printf("%d\n",(a>b)&&(a<b));
    printf("%d\n",(a<b)||(a<b));
    printf("%d\n",(a>b)&&(a>b));
    printf("%d\n",(a>b)||(a<b));
    printf("%d\n",(a>b)&&(a<b)||(a==c));
    printf("%d\n",(a<b)^(a<b));
    printf("%d\n",((a<b)?a:b);
}
