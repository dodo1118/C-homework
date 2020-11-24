#include <stdio.h>
int main(void)
{
    float a[3][4], max;
    for (int i = 0; i < 3; i++)
        scanf("%f%f%f%f", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
    max = a[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            max = max > a[i][j] ? max : a[i][j];
        printf("%.2f", max);
                return 0;
}