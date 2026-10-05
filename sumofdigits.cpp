//w.c.p to calculate sum of digits
#include<stdio.h>
int main()
{
	int n,i=1;
	int d=0,sum=0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	printf("\n sum=%d",sum);
}
