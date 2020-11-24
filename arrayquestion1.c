#include <stdio.h>
int main()
{
    int i, a[10];
    int max1, max2;
    scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    max2 = a[0];
    for (i = 0; i < 10; i += 2)
    {
        max1 = a[i] > a[i + 1] ? a[i] : a[i + 1];
        max2 = max2 > max1 ? max2 : max1;
    }
    printf("%d", max2);
    return 0;
}