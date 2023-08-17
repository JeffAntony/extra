#include <stdio.h>
int main () {
int i;
int n;
int a[n];
printf("enter the number of elements ");
scanf("%d",&n);
printf("enter the size of elements is %d",n);
for(i=0; i<=n; i++) {
  printf("%d\n",a[i]);}
 for(i=n-1; i>=0; i--) {
 printf("%d\n",a[i]);	
 }
  	
 return 0;
}
