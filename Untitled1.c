#include<stdio.h>
int a,b,c,d;
int main()
{
    printf("enter the values for a and b\n");
    scanf("%d%d",&a,&b);
    opertation();
}
int opertation(){
    c=a*b;
    d=a+b;
    printf("%d\n%d",c,d);
}
