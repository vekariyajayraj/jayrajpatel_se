/*
Series Program:

26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
*/

#include<stdio.h>
int main(){
	int a,b,i,c,sum;
	printf("\n Enter value for series (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) : ");
	scanf("%d",&a);
	sum=0;
	for(i=1;i<=a;i++){
		c=0;
		for(b=1;b<=i;b++){
			c=c+b;
		}
		sum=sum+c;
	}
	printf("\n %d",sum);
}
