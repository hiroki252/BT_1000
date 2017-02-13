#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n, i;
    float temp=0;
    printf("\nNHAP GIA TRI CUA N :");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        temp = temp + pow(-1,i)*pow(n,2*i+1);
    }
    printf("\n%0.2f", temp);
}

