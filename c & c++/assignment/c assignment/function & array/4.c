/*
4. WAP to find factorial using recursion
*/

#include<stdio.h>
int factorial(int n);

int main(){
	int a,ans;
	printf("\n Enter the number to find factorial :");
	scanf("%d",&a);
	ans=factorial(a);
	printf("\nfactorial of %d is = %d",a,ans);
}

int factorial(int n){
	if(n>0){
		return n*(factorial(n-1));
	}else{
		return 1;
	}
}
