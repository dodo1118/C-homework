#include <stdio.h>
int main(void)
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 90 && grade <= 100)
        printf("A\n");
    else if (grade >= 80 && grade <= 89)
        printf("B\n");
    else if (grade >= 70 && grade <= 79)
        printf("C\n");
    else if (grade >= 60 && grade <= 69)
        printf("D\n");
    else if (grade >= 0 && grade <= 59)
        printf("E\n");
    else
        printf("error!\n");

    return 0;
}