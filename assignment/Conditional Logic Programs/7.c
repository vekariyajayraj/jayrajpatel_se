/*
7. Accept marks from user and check pass or fail
*/

#include<stdio.h>
int main(){
	int m;
	
	printf("\n Enter your marks : ");
	scanf("%d",&m);
	
	if(m>=35){
		printf("\n You clear the exam");
	}else{
		printf("\n you failed \n Batter luck next time");
	}
	
}



