#include <stdio.h>
int main()
{
    int a[3][3], t;
    for (int i = 0; i < 3; i++)
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
    for (int i = 0; i < 3; i++)
    {
        t = a[0][i];
        a[0][i] = a[2][i];
        a[2][i] = t;
    }
       for (int i = 0; i < 3; i++)
    {
        t = a[0][i];
        a[0][i] = a[1][i];
        a[1][i] = t;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}