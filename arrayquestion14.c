#include <stdio.h>
int main()
{
    int a[8], i, j, t;
    scanf("%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);
    for (i = 0; i < 8; i++)
        for (j = 0; j < 7 - i; j++)
            if (a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
    for (i = 0; i < 8; i++)
        printf("%d ", a[i]);
    return 0;
}