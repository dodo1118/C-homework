#include <stdio.h>
int main()
{
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int num1, num2, t;
    scanf("%d%d", &num1, &num2);
    while (num1 != num2)
    {
        t = a[num1-1];
        a[num1-1] = a[num2-1];
        a[num2-1] = t;
        num1++;
        num2--;
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}