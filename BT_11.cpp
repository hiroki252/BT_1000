#include<stdio.h>
#include<conio.h>
#include<math.h>
int Tinh(int a);
int Tinh(int a)
{
    if ( a == 1)
        return 1;
    else
        return ( a*Tinh(a-1));
}
int main()
{
    int n;
    float Tong = 0;
    printf("/nNhap N = ");
    scanf("%d", &n);
    int i;
    for (i=1;i<=n;i++)
    {
        Tong =  Tong + Tinh(i);
    }
    printf("%0.2f", Tong);
    getch();
    return 0;


}


