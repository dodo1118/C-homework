#include <stdio.h>
int main()
{
    int m, i,sum1=0,sum2=0;
    scanf("%d", &m);
    for (i = 1; i < m; i++)
    {
        sum1+=i;
        sum2=sum1+i+1;
        if(sum1<m&&sum2>m)
        break;
    }
    printf("%d", i);
        return 0;
}