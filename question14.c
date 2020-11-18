#include<stdio.h>
int main(void)
{
    char grade;
    grade = getchar();
    switch(grade)
    {
        case 'A':
            printf("85-100");
            break;
        case 'B':
            printf("70-84");
            break;
        case 'C':
            printf("60-69");
            break;
        case 'D':
            printf("0-59");
            break;
        default:
            printf("error!");
        }
    return 0;
}
