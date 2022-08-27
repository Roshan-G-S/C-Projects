#include<stdio.h>
int eng,tam,math,sci,ss,Total;
float per;
int main()
{

    printf("enter the marks for the results");
    printf("\n English:");
    scanf("%d",&eng);
    printf("\n Tamil:");
    scanf("%d",&tam);
    printf("\n Mathematics:");
    scanf("%d",&math);
    printf("\n Science:");
    scanf("%d",&sci);
    printf("\n Social Science:");
    scanf("%d",&ss);
    calc();
}

int calc()
{
    Total = eng+tam+math+sci+ss;
    per= Total/5;
    printf("\nYour Total Marks Obtained is %d\t",Total);
    printf("\nYour Percentage is %.2f\t",per);
    if(per>=35)
    {
        printf("KUDOS PASS");
    }else{
        printf("\nBETTER LUCK NEXT TIME");
    }
}
