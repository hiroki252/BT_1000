#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("\nNhap N = ");
    scanf("%d", &a);
    int i,Tong;
    Tong = 0;
    for (i=1;i<=a;i++)
    {
       Tong= Tong + pow(i,2);
    }
    printf("Dap an : %d", Tong);
	return 0;
}
