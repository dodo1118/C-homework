#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    if (num <= 0)
        printf("error!");
    else if (num % 10 == 0 && num / 10 % 10 != 0)
        printf("%d%d", num / 10 % 10, num / 100);
    else if (num % 10 == 0 && num / 10 % 10 == 0)
        printf("%d", num / 100);
    else
    {
        printf("%d%d%d", num % 10, num / 10 % 10, num / 100);
    }

    return 0;
}