#include <stdio.h>
#include <string.h>
int main()
{
    char a[80];
    int i, cnt = 0;
    scanf("%s", a);
    while (a[i++] != 0)
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
            cnt++;
    printf("%d", cnt);
    return 0;
}