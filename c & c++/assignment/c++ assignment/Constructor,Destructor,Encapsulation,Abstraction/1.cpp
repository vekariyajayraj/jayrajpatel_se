/*
1. Write a program to find the multiplication values and the cubic values using inline function
*/

#include<iostream>
using namespace std;
class A{
	public:
		int x;
		inline void multiolication(){
			cout<<"\n multipliction value of : "<<X<<" is "<<x*x;
		}
		inline void cubic(){
			cout<<"\n cubic value of :"<<x<<" is "<<x*x*x;
		}
};	

int main(){
	A m1;
	int a,b;
	cout<<"\n Enter your value of find multipliction value :";
	cin>>a;
	m1.multiolication();
	cout<<"\n Enter your value of find cubic value :";
	cin>>b;
	m1.cubic();
}