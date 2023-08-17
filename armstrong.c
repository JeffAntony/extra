#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
int temp=n;
int n2=n;
int count=0;
while(n>0){
count ++;
n=n/10;
}
printf("\n count of %d",count);
int ans=0;
while(n2!=0)
{
	int rem=n2%10;
	ans=ans+pow(rem,count);
	n2=n2/10;
}

if(ans==temp)
printf("\n armstorng no:");
else
printf("\n not a armstrong number");
}

