#include<stdio.h>
int main(void)
{
    int a, b, c, deta;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
        printf("error!");
    else
    { 
           deta = b * b - 4 * a * c;
        if(deta>0)
            printf("2");
        else if(deta==0)
            printf("1");
        else
            printf("0");
    }
    return 0;
}