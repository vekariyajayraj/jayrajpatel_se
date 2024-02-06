/*
x5). Write a C++ program to create a class called Rectangle that has private
	member variables for length and width. Implement member functions to
	calculate the rectangle's area and perimeter.
*/

#include<iostream>
using namespace std;
class rectangle{
	private:
		int l,b;
		public:
			int area( int l,int b){
				return (l*b);
			}
			int perimeter(int l,int b){
				return (2*(l+b));
			}
};
int main(){
	int a,b ;
	
    cout<<"\n Enter the length :";
	cin>>a;
	cout<<"\n Enter the width :";
	cin>>b;
	
	rectangle r1;
	cout<<"\n area of rectangle is :"<<r1.area(a,b);	
	cout<<"\n para of perimeter is : "<<r1.perimeter(a,b);
}