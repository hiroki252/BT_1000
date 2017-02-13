
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,t=0;
    printf("\nMoi ban nhap mot so nguyen Duong ");
    scanf("%d",&a);
    float temp, temp1;
    while (a>0)
    {
        temp1 = a%10;
        if(temp1>t)
        {
            t=temp1;
        }
        a=a/10;
    }
    printf("\n%d", t);
    getch();
    return 0;
}
