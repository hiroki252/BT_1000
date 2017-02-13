
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int a, i;
    float S;
    do
    {
        printf("\nNhap n (n>2)");
        scanf("%d", &a);
        if (a<2)
            printf("\nMoi ban nhap lai");

    }while(a<2);
S=0;
for (i=1;i<n;i++)
{
    S = S+i;
}
printf("\n%f", S);
getch();
    return 0;
}
