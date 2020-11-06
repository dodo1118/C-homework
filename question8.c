#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    if(num>=1&&num<=100)
        printf("%d\n", num*num);
    else
        printf("-1\n");
    return 0;
}