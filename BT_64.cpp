#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a, b, c,X;
    int k;
    printf("\nNHAP SO THICH HOP");
    printf("\n1. GAI PHUONG TRINH BAC 1");
    printf("\n2.GIAI PHUONG TRINH BAC 2");
    scanf("%d", &k);
    switch (k)
    {
    case 1:
                {
        printf("\nCHUONG TRINH GIAI PHUONG TRINH BAC 1 ");
        printf("\nA + BX = C");
        printf("\nNHAP GIA TRI CUA A = ");
        scanf("%f",&a);
        printf("\nNHAP GIA TRI CUA B = ");
        scanf("%f", &b);
        printf("\nNHAP GIA TRI CUA C = ");
        scanf("%f", &c);
        if (b==0)
            printf("\nPHUONG TRINH VO NGHIEM");
        else
        X= (c-a)/b;
                }

    case 2:
                {
                   printf("\nPHUONG TRINH GIAI PHUONG TRINH BAC 2");
                   printf("\NNHAP GIA TRI CUA A = ");
                   printf("\nNHAP GIA TRI CUA B = ");
                   printf("\nNHAP GIA TRI CUA C = ");
                   int delta = b*b-4*a*c;
                   if(delta < 0)
                    printf("\nPHUONG TRINH VO NGHIEM");
                   else if ( delta = 0 )
                   {
                       printf("\nPHUONG TRINH CO NGIEM KEP ");
                       X = -b/2*a;
                       printf("\n X = %d", X);
                   }
                   else
                   {
                       printf("\nPHUONG TRINH CO HAI NGHIEM PHAN BIET ");
                        float X1 = (-b+sqrt(delta))/2*a;
                        printf("\nX1 = %f", X1);
                        float X2 = (b+sqrt(delta))/2*a;
                        printf("\nX2 = %f", X2);
                   }

                }

    }
}
