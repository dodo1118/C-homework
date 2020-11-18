#include<stdio.h>
int main(void)
{
    int long1, long2, long3;
    scanf("%d%d%d", &long1, &long2, &long3);
    if(long1+long2>long3&&long1+long3>long2&&long2+long3>long1)
    {
        if(long1==long2&&long2==long3&&long1==long3)
            printf("1");
        else if(long1==long2||long1==long3||long2==long3)
            printf("2");
        else if (long1 *long1 == long2 * long2 + long3 *long3||long2*long2==long1*long1+long3*long3||long3*long3==long1*long1+long2*long2)
            printf("3");
        else
            printf("0");
    }
    else
        printf("error!");
    return 0;
}