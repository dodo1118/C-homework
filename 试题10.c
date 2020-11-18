#include<stdio.h>
int main()
{
	float v0,a,t,s;
	scanf("%f%f%f", &v0, &a, &t);
	s=v0*t+(a*t*t)/2;
	printf("%.2f", s);
	return 0;
} 
