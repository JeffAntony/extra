#include<stdio.h> 
int main ()  {


	int num,rem,product;
	scanf("%d",&num);
	product=1;
	while(num >0) {
	rem=num%10;
	product=rem*product;
	num=num/10;
	} 
	printf("%d",product);
	return 0; }


//int num,rem,product;
//scanf("%d",num);
//product=1
//

