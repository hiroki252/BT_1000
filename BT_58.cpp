#include<stdio.h>
#include<conio.h>
int main()
{
    int n,dv=0,temp;
    printf("\nNhap N = ");
    scanf("%d", &n);
    int a=n;
    while (a>0)
    {
        temp = a%10;
        dv = dv*10+temp;
        a=a/10;
    }
    if(dv == n)
        printf("\nLa so doi xung");
    else
        printf("\nLa so khong doi xung");
}
