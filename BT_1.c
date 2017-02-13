#include<stdio.h>
void main()
{
    int a;
    printf("\nNhap N = ");
    scanf("%d", &a);
    int i,Tong;
    Tong = 0;
    for (i=0;i<a;i++)
    {
       Tong= Tong + i;
    }
    printf("Dap an : %d", Tong);
}

