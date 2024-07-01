/*
31. Write a program in C to read any Month Number in integer and display the
number of days for this month.
*/

#include<stdio.h>
int main(){
	
	int m;
	printf("\n Enter any Month in number format(1 to 12) : ");
	scanf("%d",&m);
	
	switch(m){
		case 1 : printf("	31 days in month");break;
		case 2 : printf("	28 or 29 days in month");break;
		case 3 : printf("	31 days in month");break;
		case 4 : printf("	30 days in month");break;
		case 5 : printf("	31 days in month");break;
		case 6 : printf("	30 days in month");break;
		case 7 : printf("	31 days in month");break;
		case 8 : printf("	31 days in month");break;
		case 9 : printf("	30 days in month");break;
		case 10 : printf("	31 days in month");break;
		case 11 : printf("	30 days in month");break;
		case 12 : printf("	31 days in month");break;
		default : printf("	Enter valid month");break;
	}
}
