/*
2). Write a C++ Program to find Area of Rectangle using inheritance
*/

#include<iostream>
using namespace std;
class area{
	protected:
		int a,b;
	public:
		void get_data(int x,int y){
			a=x;
			b=y;
		}
};
class rectangle:public area{
	public:
		void print_data(){
			cout<<"\n Area of rectangle is "<<a*b;
		}
};

int main(){
	int a,b;
	rectangle r1;
	cout<<"\n Enter length of rectangle : ";
	cin>>a;
	cout<<"\n Enter width of rectangle :";
	cin>>b;
	r1.get_data(a,b);
	r1.print_data();
}