#include<stdio.h>
int main() 
{
	int p,w,s;
	double d,f;
	scanf("%d%d%d%lf", &p,&w, &s, &d);
	f=p*w*s*(1-d);
	printf("%.2lf", f);
	return 0;
}
