#include<stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, s, p;
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%.2f\n", s);
    }
    else
        printf("-1\n");
    return 0;
}