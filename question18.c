#include<stdio.h>
int main()
{
       int year;
    scanf("%d", &year);
    if(year%4==0&&year%100!=0)
        printf("0");
    else if (year % 400 == 0 && year % 100 != 0)
        printf("0");
    else
        printf("1");
    return 0;
}