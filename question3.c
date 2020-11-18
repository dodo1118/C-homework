#include <stdio.h>
int main()
{
    int a, cnt = 0;
    int j;
    int i;
    scanf("%d", &a);
    for (i = 100; i <= a; i++)
    {
        for (j = 2; j < i; j++)
            if (i % j == 0)
                break;
        if (i == j)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}