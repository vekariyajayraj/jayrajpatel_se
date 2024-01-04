/*
4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement
*/

#include<stdio.h>
int main(){
 	int a,b;
 	char c;
 	
 	
 	printf("\n Enter value of a : ");
 	scanf("%d",&a);

 	printf("\n Enter value of b : ");
 	scanf("%d",&b);	
	
	printf("\n Enter methamatical sign\n ( + , - , / , * , %% )       : ");
 	scanf(" %c",&c);
 	
	
	if(c == '+'){
		printf("\n\n sum of %d and %d is %d",a,b,a+b);
	}else if(c == '-'){
		printf("\n\n substraction of %d and %d is %d",a,b,a-b);
	}else if(c == '*'){
		printf("\n\n multiplication of %d and %d is %d",a,b,a*b);
	}else if(c == '/'){
		printf("\n\n division of %d and %d is %.2f",a,b,(float)a/(float)b);
	}else if(c == '%'){
		printf("\n\n mod of %d and %d is %d",a,b,a%b);
	}
	
	
}




