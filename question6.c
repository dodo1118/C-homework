#include<stdio.h>
int main(void)
{
    char a;
    a = getchar();
    if(a>='A'&&a<='z')
        printf("It is an alphabetic character.\n");
    else if(a>='0'&&a<='9')
        printf("It is a digit.\n");
    else
        printf("It is other character.");
    return 0;
}
