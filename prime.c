#include<stdio.h> 
int main()  {
int i,n;
int count=0; 
scanf("%d",&n);
for(i=1; i<=n; i+=1)
  {   
          if(n%i==0)
 	
 	count++;
  }
  if (count>2) {
  printf("non prime");}
  else{
   printf("prime");}
   return 0; }
  
