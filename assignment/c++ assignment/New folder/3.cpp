/*
3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)

*/

#include<iostream>
using namespace std;
class student{
	public:
		float percentage;
		void get_percentage(){
			cout<<"\n Enter percentage : ";
			cin>>percentage;
		}
		void print_percentage(){
			cout<<"\n percentage ="<<percentage;
		}
};
class teacher{
		public:
			float salary;
			void get_salary(){
				cout<<"\n Enter your salary";
				cin>>salary;
			}
			void print_salary(){
				cout<<"\n salary ="<<salary;
			}
};
class person:public student, public teacher{
	protected:
		char name[20];
		int age;
		public:
			void get_person_data(){
				cout<<"\n Enter your name ";
				cin>>name;
				cout<<"\n Enter your age :";
				cin>>age;
			}
			void print_person_data(){
				cout<<"\n name "<<name;
				cout<<"\n age "<<age;
			}
};
int main(){
	int a;
	person p1;
	cout<<"\n select option \n 1). student  \n 2). Teacher \n\t";
	cin>>a;
	p1.get_person_data();
	(a==1)?(p1.get_percentage()):(p1.get_salary());
	p1.print_person_data();
	(a==1)?(p1.print_percentage()):(p1.print_salary());
	
}