#include<stdio.h>
int main(void)
{
    char grade;
    grade = getchar();
    switch(grade)
    {
        case 'A':
            printf("85-100\n");
            break;
        case 'B':
            printf("70-84\n");
            break;
        case 'C':
            printf("60-69\n");
            break;
        case 'D':
            printf("0-59\n");
            break;
        default:
            printf("error!\n");
        }
    return 0;
}
