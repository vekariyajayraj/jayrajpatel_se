/*
6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor
*/

#include<iostream>
using namespace std;
class Employee{
	private:
		char name[50],Emp_id[50],perf;
		int salary;
	public:
	      Employee(){
	      	cout<<"\n Enter your name : ";cin>>name;	
	      	cout<<"\n Enter your employee_id :  ";cin>>Emp_id;
	      	cout<<"\n performance of employee \n A) Extreamly best \n B) Good \n C) Best \n D)  Bad \n E) Very Bad \n ";cin>>perf;
	      	
	      	if(perf=='A'){
	      		salary = 100000;
			  }else if(perf=='B'){
			  	salary = 80000;
			  }else if(perf=='C'){
			  	salary = 60000;
			  }else if(perf=='D'){
			  	salary = 30000;
			  }else if(perf=='E'){
			  	salary = 10000;
			  }else{
			  	cout<<"\n wrong choise of performance \n salary will show zero \n";
			  }
		  }
		  void print_data(){
		  	   cout<<"\n your name is "<<name;
		  	   cout<<"\n your employee_id is : "<<Emp_id;
		  	   cout<<"\n your salary is : "<<salary;
		  }
};
int main(){
	Employee e1;
	e1.print_data();
	cout<<"\n \n ";
	Employee e2;
	e2.print_data();
    
}