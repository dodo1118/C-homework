#include <stdio.h>
#include <string.h>
int main()
{
    int i, cnt1 = 0, cnt2 = 0, cnta, cntb;
    char a[80], b[80];
    scanf("%s", &a);
    scanf("%s", &b);
    cnta = strlen(a);
    cntb = strlen(b);
    for (i = 0; i < cnta; i += 2)
        cnt1++;
    for (i = 0; i < cntb; i += 2)
        cnt2++;
    if (cnt1 > cnt2)
        printf("1");
    else if (cnt1 == cnt2)
        printf("0");
    else
        printf("-1");
    return 0;
}