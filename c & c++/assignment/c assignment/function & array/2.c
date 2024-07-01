/*
2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)
*/

#include<stdio.h>
float calculator();


int main(){
	float ans;
	ans = calculator();
	printf("\n ans is %.2f", ans);
}

float calculator(){
	float a,c,d;
	int b;
	printf("\n Enter first input : ");
	scanf("%f",&a);
	
	printf("\n Enter second input : ");
	scanf("%f",&c);
	
	printf("\n Enter 1 for sum \n Enter 2 for substraction \n Enter 3 for multiplication \n Enter 4 for division \n        ");
	scanf(" %d",&b);
	
	switch(b){
		case 1:{d=a+c;
			break;
		}
		case 2:{d=a-c;
			break;
		}
		case 3:{d=a*c;
			break;
		}
		case 4:{d=a/c;
			break;
		}
		default:{
			printf("\n choise is wrong");
			break;
		}
	
	}
	return d;
}
