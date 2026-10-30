//wcp to check a number is prime or not using while and for loop.
#include<stdio.h>
int main(){
	int n,c=0,i=1;
	printf("enter the value of n: ");
	scanf("%d",&n);
while(i<=n){
		if(n%i==0)
		c++;
		i++;
	}
	if(c==2)
	printf("its a prime no.");
	else
	printf("its not a prime no.");
	return 0;
}
