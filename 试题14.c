#include<stdio.h>
int main()
{
	int a[7],i;
	scanf("%d", &a[0]);
	a[1]=a[0]/100;
	a[2]=a[0]%100/50;
	a[3]=a[0]%100%50/20;
	a[4]=a[0]%100%50%20/10;
	a[5]=a[0]%100%50%20%10/5;
	a[6]=a[0]%5;
	for(i=1;i<=6;++i)
	printf("%d ", a[i]); 
	return 0;
 } 
