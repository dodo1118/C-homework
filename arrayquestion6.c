#include <stdio.h>
int main()
{
    int a[10], i, cnt = 0, sum = 0;
    float average;
    scanf("%d%d%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
    for (i = 0; i < 10; i++)
        if (a[i] > 0)
        {
            sum += a[i];
            cnt++;
        }
    average = 1.0 * sum / cnt;
    printf("%.2f", average);
    return 0;
}