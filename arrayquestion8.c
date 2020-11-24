#include <stdio.h>
int main()
{
    int a[3][3], i, j, t;
    for (int i = 0; i < 3; i++)
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
    t = a[0][1];
    a[0][1] = a[1][0];
    a[1][0] = t;
    t = a[0][2];
    a[0][2] = a[2][0];
    a[2][0] = t;
    t = a[1][2];
    a[1][2] = a[2][1];
    a[2][1] = t;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}