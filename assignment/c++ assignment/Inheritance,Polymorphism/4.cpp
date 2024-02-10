/*
4. Write a C++ Program display Student Mark sheet using Multiple inheritance
*/

#include<iostream>
using namespace std;
class student{
	protected:
		char name[50];
		string school_name;
		int standard,roll_no;
		
		
	public:
		void get_student_data(){
				cout<<"\n Enter the name of student :";
				cin>>name;
				cout<<"\n Enter yoru roll_no :";
				cin>>roll_no;
				cin.sync();
				cout<<"\n Enter the school name :";
				getline(cin, school_name);//cin>>school_name;	
				cout<<"\n Enter the standard : ";
				cin>>standard;
				}
};
class marks{
	protected:
		int maths,science,english;
	public:
		void get_marks(){
			cout<<"\n Enter the maths  marks: ";
			cin>>maths;
			cout<<"\n Enter the science marks : ";
			cin>>science;
			cout<<"\n Enter the english : ";
			cin>>english;
		}
};

class print_mark_sheet:public student,public marks{
	public:
		void print_marksheet(){
			cout<<"\n Name :"<<name;
			cout<<"\n Roll_no :"<<roll_no;
			cout<<"\n School name : "<<school_name;
			cout<<"\n Standard : "<<standard;
			cout<<"\n \n maths : "<<maths<<"\n science : "<<science<<"\n english : "<<english;
			cout<<"\n \n Total marks : "<<maths+science+english;
			cout<<"\n percentage : "<<(maths+science+english)/3<<"%";
		}
};
int main(){
	print_mark_sheet m1;
	m1.get_student_data();
	m1.get_marks();
	m1.print_marksheet();
}