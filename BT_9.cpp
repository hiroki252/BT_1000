#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float Tong = 1;
    printf("/nNhap N = ");
    scanf("%d", &n);
    int i;
    for (i=1;i<=n;i++)
    {
        Tong = Tong*i ;
    }
    printf("%0.2f", Tong);
    getch();
    return 0;


}

