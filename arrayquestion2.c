#include <stdio.h>
int main(void)
{
    float a[10];
    float min1, min2;
    scanf("%f%f%f%f%f%f%f%f%f%f", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
    min2 = a[0];
    for (int i = 0; i < 10; i += 2)
    {
        min1 = a[i] < a[i + 1] ? a[i] : a[i + 1];
        min2 = min2 < min1 ? min2 : min1;
    }
    printf("%.2f", min2);
    return 0;
}