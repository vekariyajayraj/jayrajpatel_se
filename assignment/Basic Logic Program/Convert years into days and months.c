//28.Convert years into days and months

#include<stdio.h>
int main(){
	int month=12;
	float year;
	double Day=365.25;
		
	printf("\n Enter of year numbers : ");
	scanf("%f",&year);
	
	Day=year*Day;
	month=year*month;
	
	printf("\n The year of convert day that day is %2f",Day);
	printf("\n The year of convert month that month is %2f",month);
		
}
