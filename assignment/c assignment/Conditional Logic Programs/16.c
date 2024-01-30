/*
16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/

#include<stdio.h>
int main(){
	int t;
	printf("\n Enter temperature value : ");
	scanf("%d",&t);
	printf(" \n\n");
	if(t<0){
		printf("Freezing weather");
	}else if(t>=0 && t<10){
		printf("Very Cold weather");
	}else if(t>=10 && t<20){
		printf("Cold weather");	
	}else if(t>=20 && t<30){
		printf("Normal in Temp");
	}else if(t>=30 && t<40){
		printf("Its Hot");
	}else{
		printf("Its Very Hot");
	}
	
	
}



