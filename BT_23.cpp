#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n;
    float Tong = 0;
    printf("/nNhap N = ");
    scanf("%d", &n);
    int i;
    for (i=1;i<=n;i++)
    {
            if (n%i==0)
        Tong++;
    }
    printf("%0.2f", Tong);
    getch();
    return 0;


}



