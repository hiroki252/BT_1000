
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
    float temp = sqrt(1), temp1;
    for (i=(n-2);i>=0;i--)
    {

      temp1 = sqrt((n-i)+temp);
      temp = temp1;
    }
    printf("%f", temp1);
    getch();
    return 0;


}

