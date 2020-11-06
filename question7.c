#include<stdio.h>
int main(void)
{
    int long1, long2, long3;
    scanf("%d%d%d", &long1, &long2, &long3);
    if(long1+long2>long3&&long1+long3>long2&&long2+long3>long1)
    {
        if(long1==long2&&long2==long3&&long1==long3)
            printf("1\n");
        else if(long1==long2||long1==long3||long2==long3)
            printf("2\n");
        else if (long1 *long1 == long2 * long2 + long3 *long3||long2*long2==long1*long1+long3*long3||long3*long3==long1*long1+long2*long2)
            printf("3\n");
        else
            printf("0\n");
    }
    else
        printf("error!\n");
    return 0;
}