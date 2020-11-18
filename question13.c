#include<stdio.h>
int main(void)
{
    float s;
    scanf("%f", &s);
    if(s<0)
        printf("error!");
    else if(s>=0&&s<250)
        printf("%.2f", 10*s);
    else if(s>=250&&s<500)
        printf("%.2f", 10*s*0.98);
    else if (s >= 500 && s < 1000)
        printf("%.2f", 10*s*0.95);
    else if(s>=1000&&s<2000)
        printf("%.2f", 10*s*0.92);
    else if(s>=2000&&s<3000)
        printf("%.2f", 10*s*0.9);
    else
        printf("%.2f",10*s*0.85);
    return 0;
}