#include<stdio.h>
int main (){
	char name[20],birthday[20],address[50],age[20];
	
	printf("please enter your name :");
	scanf("%s",&name);
	printf("\n");
	printf("Please Enter your birthday : ");
	scanf("%s",&birthday);
	printf("\n");
	printf("Please Enter your addresh : ");
	scanf("%s",&address);
	printf("\n");
	printf("Please Enter your age : ");
	scanf("%s",&age);
	
	
	printf("\n");
	printf("Your name is : %s",name);
	printf("\n");
	printf("Your birthday is : %s", birthday);
	printf("\n");
	printf("Your address is : %s",address);
	printf("\n");
	printf("Your age is : %s",age);
	
}
