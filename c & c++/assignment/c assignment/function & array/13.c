/*
13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array
*/

#include<stdio.h>
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		printf("\n\n Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
		(a[i]%2==0)?(printf(" Numbmer you entered is even")):(printf(" Numbmer you entered is odd"));
	}
}
