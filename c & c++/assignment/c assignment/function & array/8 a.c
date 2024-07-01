/*
8). Write a program of structure employee that provides the following
	a). information -print and display empno, empname, address
		and age.
*/

#include<stdio.h>
int main(){
	int a,empno,empage;
	char empname[20],empaddress[50];
	
	do{
		printf("\n Enter employee number : ");
		scanf("%d",&empno);
		
		while(getchar()!='\n'); 
		printf("\n Enter employee name : ");
		gets(empname);

		
		printf("\n Enter employee age : ");
		scanf("%d",&empage);
		
		while(getchar()!='\n'); 
		printf("\n Enter employee address : ");
		gets(empaddress);
			
		printf("\n Employee number : %d",empno);
		printf("\n Employee name 	: %s",empname);
		printf("\n Employee address : %s",empaddress);
		printf("\n Employee age 	: %d",empage);
		
		printf("\n\n 1). add another detail \n 2). exit");
		printf("\n Enter your choice : ");
		scanf("%d",&a);
	}while(a==1);
}
