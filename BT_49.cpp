#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("\nMoi ban nhap mot so nguyen Duong ");
    scanf("%d",&a);
    float temp, temp1;
    while (a>0)
    {
        temp1 = a%10;
        i = temp1;
        a=a/10;
    }
    printf("\n%d", i);
    getch();
    return 0;
}
