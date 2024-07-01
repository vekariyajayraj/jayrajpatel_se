#include<stdio.h>
#include<conio.h>
int main () {
	char name [20], birthday[10], address[50], age[15];
	
	printf("please enter your name: ");
	scanf("%s",& name);
	printf("\n");
	printf("please enter your birthday: ");
	scanf("%s",& birthday);
	printf("\n");
	printf("please enter your address: ");
	scanf("%s",& address);
	printf("\n");
	printf("please enter your age: ");
	scanf("%s",& age);
	printf("\n");
	
	printf("\n");
	printf("your name is : %s", name);
	printf("\n");
	printf("your birthday is : %s", birthday);
	printf("\n");
	printf("your address is : %s", address);
	printf("\n");
	printf("your age is : %s", age);
	printf("\n");
	
	getch();
	
}
