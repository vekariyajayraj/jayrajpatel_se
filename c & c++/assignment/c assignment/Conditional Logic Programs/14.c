/*
14.WAP to find the largest of three numbers.
*/

#include<stdio.h>
int main(){
	int x,y,z;
	
	printf("\n Enter value of X, Y, and Z : ");
	scanf("%d %d %d",&x, &y, &z);
	
	(x>y)? ((x>z)? printf("%d is largest number",x):printf("%d is largest number",z))
		  :((y>z)? printf("%d is largest number",y):printf("%d is largest number",z));

	
}

