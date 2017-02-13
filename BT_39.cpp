#include<stdio.h>
#include<math.h>
#include<conio.h>
int Tinh(int n);
int Tinh(int n)
{
    if (n==1)
        return 1;
    else
        return (n*Tinh(n-1));
}
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
    S = pow(Tinh(i)+S,1/(i+1));
}
printf("\n%f", S);
getch();
    return 0;
}
