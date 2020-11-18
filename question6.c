#include <stdio.h>
int main()
{
    int i, fuck, sum, j;
    scanf("%d", &fuck);
    for (j = 1; j <= fuck; j++)
    {
        for (i = 1, sum = 0; i < j; i++)
            if (j % i == 0)
                sum += i;
        if (sum == j)
            printf("%d ", j);
    }
    return 0;
}
