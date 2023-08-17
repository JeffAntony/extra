#include<stdio.h> 
//float triangle(float r)
//{
//	float pi=3.14;
//	float  t=pi*r*r;
//	return t;
//}//
 //float main ()
 //{
 //	float r;
 //	scanf("%f",&r);
 //	float tri=triangle(r);
 //	printf("triangle is %f",tri);
 //}
 

  int sum(int a , int b) {
       int d=a+b;
       return d;
}
 	
 
 
 int main() {
 
 int add,a,b;
  scanf("%d%d",&a,&b);
 add =sum(a,b);
 printf("sum is %d", add);
 return 0;
 }
