/*
32.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
int main(){
	int s,v;  		// s = salary
	printf("\n Enter your basic salary : ");
	scanf("%d",&s);
	
	// calculation for gross salary is (s+HRA+DA)
	if(s<=10000){
		printf("\n Your gross salary is %.2f ",(s+(s*0.2)+(s*0.8)));
	}else if(s>10000 && s<=20000){
		printf("\n Your gross salary is %.2f ",(s+(s*0.25)+(s*0.9)));
	}else{
		printf("\n Your gross salary is %.2f ",(s+(s*0.3)+(s*0.95)));
	}
	
}


