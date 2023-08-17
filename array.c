#include<stdio.h>
int main()
{
int n;
int sum=0;
  printf("Enter the  size of the array");
  scanf("%d",&n);
  
  int a[n];
  printf("enter the elemen of array");
  int i;
  for(i=0;i<n;i++)
  {
  	
  	scanf("%d",&a[i]); 
  	sum=sum+a[i];
  }
  printf("%d",sum);
}
