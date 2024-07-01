/*
12.Write a program to swap the two numbers using friend function without using third variable
*/

#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
	protected:
		void get(){
			cout<<"\n Enter value of a : ";cin>>a;
			cout<<" Enter value of b : ";cin>>b;
		}
		
	friend void B(A& temp);
};
void B(A& temp){
	int x;
	temp.get();
	x=temp.a+temp.b;
	temp.b = x-temp.b;
	temp.a = x-temp.a;
	cout<<"\n a = "<<temp.a;
	cout<<"\n b = "<<temp.b;
}

int main(){
	A a1;
	B(a1);
}
