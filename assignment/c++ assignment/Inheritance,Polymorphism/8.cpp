	/*
8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters 
and Function Overloading
*/

#include<iostream>
using namespace std;
class A{
	public:
		 void mo(int x,int y){
		 	cout<<"\n a + b  = "<<x+y;
		 }
		 void mo(double x ,int y){
		 	cout<<"\n a - b = "<<x-y;
		 }
		 void mo(int x,double y){
		 	cout<<"\n a * b = "<<x*y;
		 }
		 void mo(double x, double y){
		 	cout<<"\n a / b = "<<x/y;	
		 }
};

int main(){
	A obj;
	
	obj.mo(10,20);
	obj.mo(10.10,20);
	obj.mo(10,10.20);
	obj.mo(10.10,20.20);
}