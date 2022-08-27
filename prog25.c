#include<stdio.h>
void main()
{
    char y,a,z;
    printf("enter an value:");
    scanf("%c",&a);
    y=(a>='a'&& a<='z')?printf("%c its alphabet"):printf("%c its not an alphabet");
}
