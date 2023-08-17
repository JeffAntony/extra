#include<stdio.h>
int sum(int a,int b)
{
	//int temp=0;
	int temp =a;
	a=b;
	b=temp;
}

int main()
{
	int a,b;
	int res= sum();
	printf("sum is:%d",res);
	return 0;
	
}
