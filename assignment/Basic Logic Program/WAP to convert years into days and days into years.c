//30.WAP to convert years into days and days into years

#include<stdio.h>
int main(){
	float year;
	double day=365;
	
	printf("Enter the year number : ");
	scanf("%f",&year);
	 
	 day=year*day;
	 
	 printf("\n The year of a days is %2f : ",day);
	 
	 day=year/day;
	 
	 printf("\n This is a year %2f : ",year);
	
}
