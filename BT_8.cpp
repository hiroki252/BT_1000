#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float Tong = 0;
    printf("/nNhap N = ");
    scanf("%d", &n);
    int i;
    for (i=1;i<=n;i++)
    {
        Tong = Tong + (float)(2*i+1)/(2*i+2);
    }
    printf("%f", Tong);
    getch();
    return 0;


}

