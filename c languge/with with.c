/*
int function_name (arguments){
return values;

}
void main(){
int variable;
print
}
*/
#include<stdio.h>
int fun(int,int);
void main(){
	int num1,ans,num2;
	printf("Enter your numbers here : ");
	scanf("%d%d",&num1,&num2);
	ans=fun(num1,num2);
	printf("This is total %d",ans);
	
}
int fun(int num2,int num){
	return num2+num;
}

