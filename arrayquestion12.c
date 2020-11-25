#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, cnt1 = 0, cnt2 = 0, cnta, cntb;
    char a[80], b[80], A[80], B[80];
    scanf("%s", &A);
    scanf("%s", &B);
    for (i = 0, j = 0; i < strlen(A); i += 2, j++)
    {
        a[j] = A[i];
    }
    for (i = 0, j = 0; i < strlen(B); i += 2, j++)
    {
        b[j] = B[i];
    }
    if (strcmp(a, b) > 0)
        printf("1");
    else if (strcmp(a, b) == 0)
        printf("0");
    else
        printf("-1");
    /*
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
    */
    return 0;
}