#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char a[80], b[80], c[80];
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0, j = 0; i < strlen(b); i += 2, j++)
    {
        c[j] = b[i];
    }
    strcat(a, c);
    printf("%s", a);
    return 0;
}