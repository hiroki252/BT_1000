
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,dv=0,i=1,temp,t=1;
    float temp1;
    printf("\nNhap N = ");
    scanf("%d", &n);
    int a=n;
    while (a>0)
    {
        temp = a%10;
        temp1=temp-t;
        if (temp1>0)
        {
            i++;
        }
        t =temp;
        dv++;
        a=a/10;

    }
    if(dv == i)
        printf("\ngiam dan");
    else
        printf("\nkhong giam dan");
        getch();
        return 0;
}
