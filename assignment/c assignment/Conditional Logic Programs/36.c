/*
36.Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>
int main(){
	int unit;
	printf("\n Enter unit consumed : ");
	scanf("%d",&unit);
	
//	(unit*charge)+(unit*0.20)  => amount calculation plus surcharge calculation
	
	if(unit<=50){
		printf("\n Total Electricity bill is : %.2f",(unit*0.50)+(unit*0.20));
	}else if(unit>50 && unit<=150){
		printf("\n Total Electricity bill is : %.2f",(unit*0.75)+(unit*0.20));
	}else if(unit>150 && unit<=250){
		printf("\n Total Electricity bill is : %.2f",(unit*1.2)+(unit*0.20));
	}else{
		printf("\n Total Electricity bill is : %.2f",(unit*1.5)+(unit*0.20));
	}
	
}

