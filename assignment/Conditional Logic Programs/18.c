/*
18.Write a C program to calculate profit and loss on a transaction
*/

#include<stdio.h>
int main(){
	int cp,sp;  	// cp = cost price, sp = selling price
	printf("\n Enter cost price : ");
	scanf("%d",&cp);
	
	printf("\n Enter selling price : ");
	scanf("%d",&sp);
	
	if(sp>cp){
		printf("\n Profit on transaction is : %d",sp-cp);
	}else if (sp<cp){
		printf("\n loss on transaction is : %d",cp-sp);
	}else {
		printf("\n transaction is at breakeven");
	}
	
}


