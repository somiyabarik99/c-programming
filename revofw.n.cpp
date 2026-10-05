//w.c.p to rev the digits of whole number
#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=10*rev+rem;
		n=n/10;
	}
	printf("\n reverse=%d",rev);
}
