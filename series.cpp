/* 2+5+8+11+14+...upto n terms. w.c.p to calculate sum of the given series.*/
#include <stdio.h>
int main()
{
	int n,i=2,sum=0;
	printf("enter the value of \n: ");
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		i+=3;
		}
		printf("the sum is:%d\n",sum);
}
