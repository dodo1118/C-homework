#include<stdio.h>
#include<math.h>
#define g 9.8
int main()
{
	float h,t;
	scanf("%f", &h);
	t=sqrt((2*h)/g);
	printf("%.2f\n", t);
	return 0;
 } 
