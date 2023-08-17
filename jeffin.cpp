#include <stdio.h>

int main() {	\
int n;

 printf("input the number of elments to store in the array::");
 scanf("%d",&n);
 int  v[n];
 int i;
 for( i=0; i<n; i++){
  scanf("%d",&v[i]);
 }
 for(i=n-1; i>=0; i--)  {
 	printf("%d \n",v[i]);
 }

    return 0;
}
