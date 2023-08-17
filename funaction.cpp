#include<stdio.h>

int min(int a,int b,int c){
	int mn =10000000;
	if(a<=b){
	 	if(a<=c){
	 		return a;
		 }
		 else{
		 	return c;
		 }
	}
	else if(b<=c){
		return b;
	}
	else{
		return c;
	}
}

int main(){
	int a=2 , b=3 ,c=4;
	int mn = min(a,b,c);
	printf("min = %d",mn);
}
