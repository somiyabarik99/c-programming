//wcp to check a number is prime or not using while and for loop.
#include<stdio.h>
int main(){
	int n,c=0,i;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
		c++;
	}
	if(c==2)
	printf("its a prime no.");
	else
	printf("its not a prime no.");
	return 0;
}
