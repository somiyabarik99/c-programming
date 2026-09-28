/* 1+2+4+7+11+...upto n terms. w.c.p to calculate sum of the given series.*/
#include <stdio.h>
int main()
{
	int n,i=2,sum=0,term=1,diff=1;
	printf("enter the numbers of terms: ");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+term;
		term=term+diff;
		diff++;
		i++;
		}
		printf("the sum is:%d\n",sum);
}
