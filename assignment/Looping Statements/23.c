//23. C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main(){
	int n,a,b;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	
	for( ;n!=0; ){
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	printf("\n Reverse number is = %d",b);
	
}
