#include <stdio.h>
int main()
{
    int a, b;
    int big = 1, small;
    int c;
    scanf("%d%d", &a, &b);
    c = a * b;
    while (a % b != 0)
    {

        big = a % b;
        a = b;
        b = big;
    }
    small = c / big;
    printf("%d %d", big, small);
    return 0;
}