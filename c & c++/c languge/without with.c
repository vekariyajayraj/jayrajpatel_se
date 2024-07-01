//without with
/* 
int function_name(){
return
}
void main(){
int ans=function_name();
}
*/
#include<stdio.h>
int sum();
void main (){
	int ans=sum();
	printf("This is your total : %d",ans);
	
}
int sum (){
	int num1,num2;
	printf("Enter your int values here : ");
	scanf("%d%d",&num1,&num2);
	return num1+num2;
}
