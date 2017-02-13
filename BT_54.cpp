
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,t=9;
    printf("\nMoi ban nhap mot so nguyen Duong ");
    scanf("%d",&a);
    float temp, temp1;
    while (a>0)
    {
        temp1 = a%10;
        if(temp1<t)
        {
            t=temp1;
        }
        a=a/10;
    }
int c = t;
int i=0;
    while (a>0)
    {
        temp1 = a%10;
        if(temp1 == c) i=i+1;
        a=a/10;

    }

    printf("\n%d", c);
    printf("\n%d", i);
    getch();
    return 0;
}
