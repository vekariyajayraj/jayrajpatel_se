/*
10.WAP to check whether a number is negative, positive or zero.
*/

#include<stdio.h>
int main(){
	int n;
	
	printf("\n Enter any number0 : ");
	scanf("%d",&n);
	
	if(n>0){
		printf("\n Value you Entered is positive");
	}else if(n<0){
		printf("\n Value you Entered is negative");
	}else{
		printf("\n Value you Entered is zero");
	}
	
}


