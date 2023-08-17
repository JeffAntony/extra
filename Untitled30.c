#include<stdio.h>
int main () {
 int i,n,product;
 product=0;	
 printf("enter the number");
 scanf("%d",&n);
for(i=1; i<=10; i=i++) 
{
 product=i*n;
 }
	printf("%d x %d =%d",i,n,i*n);

return 0;
}
