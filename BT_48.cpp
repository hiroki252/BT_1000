
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int a, temp, temp1;
    printf("\nNhap a = ");
    scanf("%d", &a);
    int i;
    temp1 =a;
    i=1;
    while (temp != 0)
    {
        temp = temp1%10;
        if(temp%2 != 0)
        {
            i = i*temp;
        }
        temp1=temp1/10;
    }
printf("%d", i);
getch();
    return 0;
}
