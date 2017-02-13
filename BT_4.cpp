#include<stdio.h>
int main(){
	int n;
printf("\nNhap N = ");
scanf("%d", &n);
int i;
float tong =0;
for(i=1;i<=n;i++)
{
	tong = tong + (float)1/(2*i);
	}
	printf("%0.2f", tong);
	return 0;
	}
