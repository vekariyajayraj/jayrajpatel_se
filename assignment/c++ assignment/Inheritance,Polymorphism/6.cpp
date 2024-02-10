/*
6. Write a C++ Program to show access to Private Public and Protected using Inheritance
*/

#include<iostream>
using namespace std;
class A{
	private:
		int a=10;
		void print_private(){
			cout<<"\n This access is private in A ";
		}
	protected:
		int b=20;
		void print_protected(){
			cout<<"\n This access is protected in A ";
		}
	public:
		int c=30;
		void print_public(){
			cout<<"\n This access is public in A ";
		}	
};
class B:public A{
	public:
		void print_b(){
			cout<<"\n public access in b ";
		}
		void change_data(){
			b=80;
			c=70;
			cout<<"\n B = "<<b;
			cout<<"\n C = "<<c;
		}
};
class C:public B{
	public:
		void print_c(){
		cout<<"\n piblic access in c ";
	}
};

int main(){
	 A a1;
	 B b1;
	 C c1;
	 
	 
	 a1.print_public();
	 b1.print_public();
	 c1.print_public();
	 
	 
	 b1.print_b();
	 b1.c=100;
	 
	 c1.print_b();
	 b1.change_data();	
}