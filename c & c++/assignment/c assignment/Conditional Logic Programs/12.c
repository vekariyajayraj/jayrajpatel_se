/*
12.WAP to find maximum number among 3 numbers using ternary operator
*/



#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("\n Enter value  of a, b, and c : ");
	scanf("%d %d %d",&a,&b,&c);
	
	(a>b)? ((a>c)? printf("%d is biggest",a):printf("%d is  biggest",c))
		  :((b>c)? printf("%d is biggest",b):printf("%d is biggest",c));
	
}
		

