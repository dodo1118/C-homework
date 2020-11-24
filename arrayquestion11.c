#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    char a[80], b[80];
    scanf("%s", a);
    scanf("%s", b);
    n = strlen(b);
    printf("%s", a);
    for (i = 0; i < n; i += 2)
        printf("%c", b[i]);
    return 0;
}