#include<stdio.h>
int main()
{
	int a,i,b[8];
	scanf("%d", &a);
	for(i=0;i<8;i++)
	{
	    b[i]=a%2;
	    a=(a-b[i])/2;
	 } 
	 for(i=7;i>=0;i--)
	 printf("%d", b[i]);
	
	return 0;
}
