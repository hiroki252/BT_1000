#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("\nNhap N = ");
    scanf("%d", &a);
    int i;
    float Tong = 0;
    for (i=1;i<=a;i++)
    {
       Tong = Tong +(float) 1/i;
    }
    printf("Dap an : %0.2f", Tong);
	return 0;
}
