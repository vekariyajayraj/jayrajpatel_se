#include<stdio.h>
int main (){
	int Number1,Number2,addition,subtraction,multiply; // veryeball
	float divide;
	
	printf("Enter your number1 :\n ");
	scanf("%d",&Number1);
	printf(" Enter your number2 : \n");
	scanf("%d",&Number2);
	
	addition =Number1 + Number2 ;
	subtraction =Number1 - Number2 ;
	multiply = Number1 * Number2 ;
	divide = Number1 / (float)Number2;
	
	printf("addition =%d\n",addition);
	printf("subtraction =%d\n",subtraction);
	printf("multiply=%d\n",multiply);
	printf("division = %.2f\n",divide); 	
}
