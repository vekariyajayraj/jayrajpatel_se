/*
m4
x4). Write a C++ program to implement a class called Circle that has private
	member variables for radius. Include member functions to calculate the
	circle's area and circumference.
*/

//area = pi*r*r
//circumference = 2*pi*r

#include<iostream>
using namespace std;
class circle{
	private:
		// data/properties
		int r;
		float pi=3.14;
	public:
		// functionality / methods
		float area(int r){
//			const float pi=3.14;  // in case of any error related to pi
			return (pi*r*r);
		}
		float circumferencec(int r){
			return (2*pi*r);
		}
};

int main(){
	int a;
	cout<<"\n Enter radious of circle : "; cin>>a;
	circle c1;
	
	cout<<"\n Area of circle is "<<c1.area(a);
	cout<<"\n circumference of circle is "<<c1.circumferencec(a);
}
