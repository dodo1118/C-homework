#include <stdio.h>
int main(void)
#define pai 3.1415926
{
    int r;
    float l, s;
    scanf("%d", &r);
    if (r <= 0)
        printf("error!");
    else
    {
        l = 2 * pai * r;
        s = pai * r * r;
        printf("%.2f,%.2f", l, s);
    }
    return 0;
}