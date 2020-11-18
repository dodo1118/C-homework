#include<stdio.h>
int main(void)
{
    float profit;
    scanf("%f", &profit);
    if(profit<=1e5)
        printf(".2%f", profit*0.1);
    else if(profit>1e5&&profit<=2e5)
        printf("%.2f", 100000*0.1+(profit-1e5)*0.075);
    else if(profit>2e5&&profit<=4e5)
        printf("%.2f",1e5*0.1+1e5*0.075+(profit-2e5)*0.05);
    else if(profit>4e5&&profit<=6e5)
        printf("%.2f", 1e5*0.1+1e5*0.075+2e5*0.05+(profit-4e5)*0.03 );
    else if(profit>6e5&&profit<1e6)
        printf("%.2f", 1e5*0.1+1e5*0.075+2e5*0.05+2e5*0.03+(profit-6e5)*0.015);
    else
        printf("%.2f", 1e5*0.1+1e5*0.075+2e5*0.05+2e5*0.03+4e5*0.015+(profit-1e6)*0.01);
    return 0;
}