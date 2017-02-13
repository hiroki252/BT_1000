#include<stdio.h>
#include<conio.h>
int main()
{
	int temp,n, t=0, i=0;
	printf("\nNhap N = ");
	scanf("%d", &n);
	while (n>0)
	{
		temp=n%10;
			if(temp % 2 == 0)
		{
			t++;
		}
		n=n/10;
		i++;
	}
	if (i==t)
	printf("\nToan chan");
	else
	printf("\nKO toan chan");
	getch();
	return 0;
	}
