//wcp to check a weather a number is perfect or not.
#include<stdio.h>
int main(){
	int n,s=0;
	printf("enter the value of n: ");
	scanf("%d",&n)
	for(i=0;i<n;i++){
		if(n%i==0)
		s+=i;
	}
	if(s==n)
	printf("its a prime no.");
	else
	printf("its not a prime no.");
	return 0;
}
