#include<stdio.h>
int factorial(int n);
int main(){
	printf("%d",factorial(5));
}
int factorial(int n){
	int a=n;
	if(n==1){
		return 1;
	}else{
		a=a*factorial(n-1);
		return a;
	}
}