

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i=0,t=0;
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
        i++;
    }
    printf("\n%d", t);
     printf("\n%d", i);
    getch();
    return 0;
}
