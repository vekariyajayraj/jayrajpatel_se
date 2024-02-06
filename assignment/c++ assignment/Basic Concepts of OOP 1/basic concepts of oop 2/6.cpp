/*
x6). Write a C++ program to create a class called Person that has private
	member variables for name, age and country. Implement member
	functions to set and get the values of these variables
*/

#include<iostream>
using namespace std;
class person{
	private:
		char name[20],country[20];
		int age ;
		public:
			void get_data(){
				cout<<"\n Enter yout name :";
				cin>>name;
				cout<<"\n Enter your age :";
				cin>>age;
				cout<<"\n Enter your country :";
				cin>>country;
				
			}
			void print(){
				cout<<"\n your name is : "<<name;
				cout<<"\n your age  is : "<<age;
				cout<<"\n your country is  : "<<country;
			}
};
int main(){
	person p1;
	p1.get_data();
	p1.print();
}