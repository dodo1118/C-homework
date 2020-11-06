#include<stdio.h>
int main()
{
    char vote;
    vote = getchar();
    if(vote=='Y'||vote=='y')
        printf("agree\n");
    else if(vote=='N'||vote=='n')
        printf("disagree\n");
    else
        printf("lose\n");
    return 0;
}