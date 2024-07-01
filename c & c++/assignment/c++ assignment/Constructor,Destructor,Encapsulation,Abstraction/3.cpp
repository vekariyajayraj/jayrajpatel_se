/*
3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/


#include<iostream>
using namespace std;
class car{
	private:
		char company[20];
		int year,modal;
		public:
			void get_data(){
		
			cout<<"\n Enter your company name :";
			cin>>company;
			cout<<"\n Enter your modal number :";
			cin>>modal;
			cout<<"\n Enter your year :";
			cin>>year;
		}
		void print_data(){
			cout<<"\n your company is "<<company;
			cout<<"\n your modal is "<<modal;
			cout<<"\n your year is "<<year;
			
		}
};

int main(){
	car c1;
	c1.get_data();
	c1.print_data();
}





