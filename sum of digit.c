#include<stdio.h>
int main () {
	int count,n;
	scanf("%d",&n);
	 count=0;
	while( n>0) {
	int rem=n%10;
	count++;
	n=n/10;	
	}
	printf("%d",count);
	return 0;
}
