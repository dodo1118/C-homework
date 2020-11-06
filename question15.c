#include<stdio.h>
#include<math.h>
int main(void)
{
    double A, B;
    scanf("%lf%lf", &A, &B);
    if(A>B)
    if(sqrt(A+B)*sqrt(A+B)==A+B&&sqrt(A-B)*sqrt(A-B)==A-B)
        printf("1\n");
    else
        printf("o\n");
    else
        printf("error!\n");
    return 0;
}