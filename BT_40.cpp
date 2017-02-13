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
S=sqrt(1);
for (i=2;i>=0;i--)
{
    S = pow(pow(i,a-i)+S,1/(1+1));
}
printf("\n%f", S);
getch();
    return 0;
}

