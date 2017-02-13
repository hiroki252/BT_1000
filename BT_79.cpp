#include<stdio.h>
#include<conio.h>
int main()
{
    int n, temp, i=0;
    printf("\nNAP GIA TRI CUA N = ");
    scanf("%d", &n);
    while (n != 0)
    {
        temp = n%10;
        n=n/10;
        i++;
    }
    printf("%d", i);
    getch();
    return 0;


}
