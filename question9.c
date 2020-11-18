#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0 ,y = 1;
    scanf("%d", &n);
    if(n == 1)
    printf("%d\n", y);
    else
    {
        for (i = 2; i <= n; i++)
        sum += 1.0/i;
        y = 1 - sum;
        printf("%.2f\n", y);
    }
    return 0;
}