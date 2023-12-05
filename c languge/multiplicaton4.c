#include<stdio.h>
int sum(int num, int num1);
main(){
	int num, num1, ans;
	printf("enter your value here :");
	scanf("%d",&num);
	printf("enter your value here :");
	scanf("%d",&num1);
	ans=sum(num,num1);
	printf("this is your final answer : %d",ans);
}
int sum(int num, int num1){
	return num+num1;
}
