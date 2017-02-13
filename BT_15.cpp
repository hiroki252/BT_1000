#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    float Tong = 0;
    float temp =0;
    printf("/nNhap N = ");
    scanf("%d", &n);
    int i;
    for (i=1;i<=n;i++)
    {
        Tong =  Tong + i;
        temp = temp + (float)1/Tong;

    }
    printf("%0.2f", temp);
    getch();
    return 0;


}


