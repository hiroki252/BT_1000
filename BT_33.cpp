
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
    float temp = sqrt(2), temp1;
    for (i=1;i<n;i++)
    {

      temp1 = sqrt(2+temp);
      temp = temp1;
    }
    printf("%f", temp1);
    getch();
    return 0;


}



