/*
19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00

30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-
*/


#include<stdio.h>
int main(){
	char name[20], id[20];  // to accept name and customer id array is used
	int unit;
	
	printf("\n Enter customer id : ");
	scanf("%s",&id);
	
	printf(" Enter customer name : ");
	scanf("%s",&name);
	
	printf(" Enter unit consumed by customer : ");
	scanf("%d",&unit);
	printf("\n\n");	
	if(unit<350){
		printf("bill details \n customer id : %s \n Name : %s \n unit consumed : %d \n Bill amount : %.2f",id,name,unit,(unit*1.2));
	}else if(unit>=350 && unit<600){
		printf("bill details \n customer id : %s \n Name : %s \n unit consumed : %d \n Bill amount : %.2f",id,name,unit,(unit*1.5));
	}else if(unit>=600 && unit<800){
		printf("bill details \n customer id : %s \n Name : %s \n unit consumed : %d \n Bill amount : %.2f",id,name,unit,(unit*1.8));
	}else{
		printf("bill details \n customer id : %s \n Name : %s \n unit consumed : %d \n Bill amount(without charge) : %.2f",id,name,unit,(unit*2.0));
		printf("\n bill amount (with charge) : %.2f",(unit*2.0)+((unit*2.0)*0.18));
		// for question (31)
		// calculation for extra charge is = (unit*2.0)+((unit*2.0)*0.18))
		printf("\n (bill exceeds Rs. 800 so a surcharge of 18%% will be charged)");
	}
	
	
}










