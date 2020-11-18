#include <stdio.h>
int main()
{
    int m, n, i;
    float sum = 0;
    scanf("%d%d", &m, &n);
    for (i = 1; i <= m; i++)
        sum += i + i * i;
    for (i = 1; i <= n; i++)
        sum += 1.0 / i + 1.0 / (i * i);
    printf("%.2f", sum);
    return 0;
}