#include<stdio.h>
#include<math.h>
int main(void)
{
    int x;
    float y;

    scanf("%d", &x);
    if(x<1)
       {
            y = x * x + 2 * x + sin(x);
            printf("%.2f\n", y);
       }
       else if (x>=1&&x<=10)
        {
               y = 2 * x - 1;
               printf("%.2f\n", y);
        }
        else
        {
            y = sqrt(2 * x * x * x - 11);
            printf("%.2f\n", y);
        }
    return 0;
}