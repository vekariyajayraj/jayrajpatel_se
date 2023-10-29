//contol statements
/*
simple if 
if (condtion){
true statement 
}
if else
if(condtion){
true statement
}else{
flase statment;
}
*/
#include<stdio.h>
main(){
	int age;
	printf("Enter your age here : ");
	scanf("%d",&age);
	if(age >18 )
	{
		printf("Allowed");
	}else{
		printf("Not Allowed");
		
	}
}
