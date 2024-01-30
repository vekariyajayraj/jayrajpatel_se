//29.Convert minutes into seconds and hours

#include<stdio.h>
int main(){
	float minutes,secound=60,hours=12;
	
	printf("\n Enter your minutes : ");
	scanf("%f",&minutes);
	
	secound=minutes*secound;
	hours=minutes/hours;
	
	printf(" minutes into secound is %f:",secound);
	printf(" minutes into hours is %f : ",hours);
	
}
