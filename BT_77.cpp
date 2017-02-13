#include<stdio.h>
#include<conio.h>
int main()
{
    int n, temp, i;
    printf("\nNAP GIA TRI CUA N = ");
    scanf("%d", &n);
    while (n != 0)
    {
        temp = n%10;
        printf("\nCac uoc so cua %d la ", temp);
        for(i=1;i<temp;i++)
        {
            if(temp%i == 0)
                printf("%3d", i);

                     }
        n=n/10;
    }
    getch();
    return 0;


}
