/*
13.WAP to find minimum number among 3 numbers using ternary operator
*/

#include<stdio.h>
int main(){
	int a,b,c;
	printf("\n Enter value of a, b, and c : ");
	scanf("%d %d %d",&a,&b,&c);
	
	(a<b)? ((a<c)? printf("%d is minimum number",a):printf("%d is minnimum number",c))
		  :((b<c)? printf("%d is minimum number",b):printf("%d is minimum number",c));
		
}


