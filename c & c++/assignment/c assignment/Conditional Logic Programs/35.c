/*
35.Accept the input month number and print number of days in that
month.

*/

#include<stdio.h>
int main(){
	
	int m;
	printf("\n Enter Month number(1 to 12) : ");
	scanf("%d",&m);
	
	switch(m){
		case 1 : printf("	31 days");break;
		case 2 : printf("	28 or 29 days");break;
		case 3 : printf("	31 days");break;
		case 4 : printf("	30 days");break;
		case 5 : printf("	31 days");break;
		case 6 : printf("	30 days");break;
		case 7 : printf("	31 days");break;
		case 8 : printf("	31 days");break;
		case 9 : printf("	30 days");break;
		case 10 : printf("	31 days");break;
		case 11 : printf("	30 days");break;
		case 12 : printf("	31 days");break;
		default : printf("	Enter valid month");break;
	}
}

