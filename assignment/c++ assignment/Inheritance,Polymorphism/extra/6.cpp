
#include<iostream>
using namespace std;
class A{
	private:
		int a=10;
		void print_private(){
			cout<<"\n this access is private in A";
		}
	protected:
		int b=20;
		void print_protected(){
			cout<<"\n this access is protected in A";
		}
	public:
		int c=30;
		void print_public(){
			cout<<"\n This access is public in A";
		}
};
class B:public A{
	public:
		void print_b(){
			cout<<"\n public access in B ";
		}
		void change_data(){
			b=80;
			c=60;
			cout<<"\n b = "<<b;
			cout<<"\n c = "<<c;
		}
};
class C:public B{
		void print_c(){
			cout<<"\n Public access in C ";
		}
};

int main(){
	A a1;
	B b1;
	C c1;
	
//	a1.a=100;				// this will show error - 'void A::int a' is private 
//	a1.print_private();		// this will show error - 'void A::print_private()' is private
//	a1.print_protected();	// this will show erroe - 'void A::print_protected()' is protected
	
	a1.print_public();		// run without error bucause access to public can be accessible by any of the inherited class
	b1.print_public();
	c1.print_public();
	
//	b1.b=200; 			// error - int A::b is protected
	
	b1.print_b();		// print_b have access to public 
	b1.c=100;			// int c is have access to public 
	
	c1.print_b();		// print_b have access to public 
	
	// through class B we can change protected data in class A because class B is instant child of class A(or direct child)
	b1.change_data();	 
	
}

/*
summary : private data not accessible outside the class
		 protected data can not accesible to outside of class but direct child of that class can access the protected data
		 public data can accessible in any class 
*/