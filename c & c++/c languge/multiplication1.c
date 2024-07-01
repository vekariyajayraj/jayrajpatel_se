#include<stdio.h>
int sum();
main(){
	int ans=sum();
	printf("\n this is your fianl answer %d",ans);
}
int sum(){
	int num,num1;
	printf("enter your first number here:");
	scanf("%d",&num);
	printf("enter your second number here:");
	scanf("%d",&num1);
	return num+num1;
}
