#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    if(num>=1&&num<=100)
        printf("%d", num*num);
    else
        printf("-1");
    return 0;
}