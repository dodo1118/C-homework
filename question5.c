#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, cnt = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
        if (pow((i % 10), 3) + pow((i % 100 - i % 10) / 10, 3) + pow((i / 100), 3) == i)
        {
            printf("%d\n",i);
            cnt++;
        }
    printf("%d",cnt);
    return 0;
}