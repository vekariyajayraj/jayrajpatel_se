/*
9). WAP to show difference between Structure and Union
*/

#include<stdio.h>
#include<string.h>
	struct student{
		int rollno;
		char name[20];
		float per;
	};

	union employee{
		int empno;
		char name[20];
		float salary;
	};

int main(){
	

	struct student s1;
	
		strcpy(s1.name,"jayraj");
		s1.rollno=23;
		s1.per=33.99;

	printf("\n%d",s1.rollno);
	printf("\n%s",s1.name);
	printf("\n%.2f\n\n",s1.per);
	
	
	
	union employee e1;

	e1.empno=123;		
	printf("\n%d",e1.empno);
	
	strcpy(e1.name,"jayraj");		
	printf("\n%s",e1.name);	
	
	e1.salary=51;		
	printf("\n%.2f",e1.salary);	
	
}
