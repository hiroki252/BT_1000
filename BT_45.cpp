#include<stdio.h>
#include<math.h>
#include<conio.h>
int Tinh(int a);
int Tinh(int a)
{
    if (a==0)
        return 0;
    else
        return (a%10+Tinh(a/10));
}
int main()
{
    int a;
    printf("\nNhap a = ");
    scanf("%d", &a);
    printf("%d", Tinh(a));
getch();
    return 0;
}

