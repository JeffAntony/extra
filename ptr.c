#include<stdio.h>
int main()
{
int a=5;
int *ptr=&a;
int **pptr=&ptr;
int ***ppptr=&pptr;
printf("%d\n",***ppptr);

	
}

 
