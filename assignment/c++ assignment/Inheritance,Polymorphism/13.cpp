/*
13.Write a program to find the max number from given two numbers using friend function
*/

#include<iostream>
#include<cmath>
using namespace std;
class A{
	private:
		int a,b;
		void get_data(){
			cout<<"\n Enter value of a :";cin>>a;
			cout<<" Enter value of b :";cin>>b;
		}
	friend void C(A& temp);
};
	void C(A& temp){
		temp.get_data();
		cout<<"\n max number is :"<<max(temp.a,temp.b);
	}

int main(){
	A a1;
	C(a1);
}
