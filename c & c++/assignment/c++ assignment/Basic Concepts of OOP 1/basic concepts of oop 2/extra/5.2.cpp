/*
m4
x5). Write a C++ program to create a class called Rectangle that has private
	member variables for length and width. Implement member functions to
	calculate the rectangle's area and perimeter.
*/

#include<iostream>
using namespace std;
class rectangle{
	private:
		// data
		int l,b;
	public:
		// functionality
		int area(int l, int b){
			return (l*b);
		}
		int perimeter(int l, int b){
			return (2*(l+b));
		}	
};

int main(){
	int a,b;
	cout<<"\n Enter length and width of rectangle : "; cin>>a>>b;
	rectangle r1;
	
	cout<<"\n area of rectangle is : "<<r1.area(a,b);
	cout<<"\n perimeter of rectangle is : "<<r1.perimeter(a,b);
	
}