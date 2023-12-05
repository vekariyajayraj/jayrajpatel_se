#include<stdio.h>
void sun();//pre decleartion 
main(){
	sum();
}
void sum(){
	int num,num1;
	printf("Enter your first number here :");
	scanf("%d",&num);
	printf("Enter your second number here :");
	scanf("%d",&num1);
	printf("This is your addtion of two number %d + %d = %d",num,num1,num+num1);
	}
