#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float k;
    printf("\nNHAP GIA TRI CUA N");
    scanf("%d", &n);
    for (i=1;i<=sqrt(n);i++)
    {
            k = pow(2,i);
    if(n == k)
        printf("done");

    }
}
