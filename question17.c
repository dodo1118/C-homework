#include<stdio.h>
int main()
{
    char vote;
    vote = getchar();
    if(vote=='Y'||vote=='y')
        printf("agree");
    else if(vote=='N'||vote=='n')
        printf("disagree");
    else
        printf("lose");
    return 0;
}