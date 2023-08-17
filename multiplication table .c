#include<stdio.h>
int main () {
	int n;
	int i;
	int firstdigit,seconddigit,sum;
 printf("enter the number");
 scanf("%d",&n);
 firstdigit=n/10;
 seconddigit=n%10;
for(i=n; i>0; i=i+1) 
{
 sum=firstdigit+seconddigit;
 printf("sum is %d",sum);
 }
	
return 0;
}
