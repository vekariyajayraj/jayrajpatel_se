//with without
/*
void main (){
function_name(arguments);

}
datatypes function_name(parameters){
function body;
}
*/
#include<stdio.h>
void sum (int , int);
void main (){
	int numbers,numbers2;
	printf("Enter your numbers here : ");
	scanf ("%d%d",&numbers,&numbers2);
	sum(numbers,numbers2);
}

void sum(int num,int num2){
	printf("This is your number 1 %d and number2 %d total is %d",num,num2,num+num2);
}
