/*
8).
b). Write a program of structure for five employee that
	provides the following information -print and display
	empno, empname, address andage
*/

#include<stdio.h>
int main(){
	int i,empno[5],empage[5];
	char empname[5][20],empaddress[5][20];
	
	for(i=0;i<5;i++){
		printf(" Employee number : ");
		scanf("%d",&empno[i]);
		
		while(getchar()!='\n');
		printf(" Employee name : ");
		gets(empname[i]);
		
		printf(" Employee age : ");
		scanf("%d",&empno[i]);
		
		while(getchar()!='\n');
		printf(" Employee address : ");
		gets(empaddress[i]);
		printf("\n");
	}
	
	for(i=0;i<5;i++){
		printf("%d",i+1);
		printf("\n Employee name 		: %s",empname[i]);
		printf("\n Employee number 	: %d",empno[i]);
		printf("\n Employee age 		: %d",empage[i]);
		printf("\n Employee address 	: %s",empaddress[i]);
		printf("\n");
	}
}