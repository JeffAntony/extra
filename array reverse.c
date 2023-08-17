#include<stdio.h>
int main()
{
int i,n;
printf("enter the number");
scanf("%d",&n);
int a[n];
for(i=0;i<n; i++)
{
 scanf("%d",&a[i]);	
}
printf("reverse the array");
for(i=n; i>0; i--)
{

printf("%d",a[i]);	
}
}








