#include <stdio.h>
int main()
{
    int n;
    double val = 1;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            val = val * j;
        }
        sum += val;
        val = 1;
    }
    printf("%.2lf\n", sum);
    return 0;
}