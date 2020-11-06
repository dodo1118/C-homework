#include<stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    if (x>-5&&x<0)
        printf("%.f",x);
    if(x==0)
        printf("%.f",x-1);
    if(x>0&&x<10)
        printf("%.f", x+1);
    return 0;
}