#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    float Tong = 0, temp = 0 ;
    printf("/nNhap N = ");
    scanf("%d", &n);
    int i;
    for (i=1;i<=n;i++)
    {
        Tong =  Tong + i;
        temp = temp + (float)(pow(n,i)/Tong);
    }
    printf("%0.2f", temp);
    getch();
    return 0;


}


