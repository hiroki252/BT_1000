#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n, i;
    float temp=0,temp1=0;
    printf("\nNHAP GIA TRI CUA N :");
    scanf("(0-9)", &n);
    for(;i<=n;i++)
    {
        temp1=temp1+i;
        temp = temp + pow(-1,(i+1))*1/(temp1);
    }
    printf("\n%0.2f", temp);
}

