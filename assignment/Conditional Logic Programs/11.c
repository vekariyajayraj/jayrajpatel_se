/*
11.WAP to find number is even or odd using ternary operator
*/

#include<stdio.h>
int main(){
	int a;
	printf("\n Enter any value : ");
	scanf("%d",&a);
	(a%2==0)? printf("\n  %d is even number",a): printf("\n  %d is odd number",a);
	
	
}

