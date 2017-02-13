#include<stdio.h>
#include<conio.h>
#include<math.h>
int Tinh(int a);
int Tinh(int a)
{
    if (a==1)
        return 1;
    else
        return (a*Tinh(a-1));
}
int main ()
{
    int n, i;
    float temp=0;
    printf("\nNHAP GIA TRI CUA N :");
    scanf("(0-9)", &n);
    for(i=1;i<=n;i++)
    {
        temp = temp + pow(-1,i+1)*pow(n,(2*i+1)/(Tinh(2*i+1)));
    }
    printf("\n%0.2f", temp);
}


