#include <stdio.h>
int main()
{
    float n;
    float h1,h2;
    scanf("%f", &n);
    h1=n;
    for (int i = 1; i <11;i++)
    {
        h2=2*n*(1.0/3);
        h1=h1+h2;
        n*=(1.0/3);
    }
    printf("%.2f\n", h1);
        return 0;
}