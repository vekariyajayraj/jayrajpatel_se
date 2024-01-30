/*
5. Check Number Is Positive or Negative
*/

#include<stdio.h>
int main(){
	int n;
	
	printf("\n Enter any number (negative or positive) : ");
	scanf("%d",&n);
	
	if(n>0){
		printf("\n Value you Entered is positive");
	}else if(n<0){
		printf("\n Value you Entered is negative");
	}else{
		printf("\n Value you Entered is beyond sign");
	}
	
}



