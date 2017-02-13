
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
    if( n ==1 )

        printf("\nSo nguyen to1 ");

   else if (n > 2)
    {
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        Tong = Tong +1;
    }}
    if ( Tong == 0)
        printf("\nSo nguyen to....");
   else
    printf("\nKhong phai so nguyen to");
    getch();
    return 0;


}



