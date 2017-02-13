#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int a, i;
    float S;
    do
    {
        printf("\nNhap n (n>2)");
        scanf("%d", &a);
        if (a<2)
            printf("\nMoi ban nhap lai");

    }while(a<2);
S=sqrt(2);
for (i=1;i<a;i++)
{
    S = pow(i+S,1/(i+1));
}
printf("\n%f", S);
getch();
    return 0;
}
