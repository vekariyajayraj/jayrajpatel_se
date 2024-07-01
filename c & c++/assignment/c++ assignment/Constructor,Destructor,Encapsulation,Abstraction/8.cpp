/*
8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each 
student implement using of aggregation
*/

#include<iostream>
using namespace std;
class address{
	public:
		string street,city,state,pincode,addr;
		
	  void get_address(){
	  	cin.sync();
	  	cout<<"\n street :";getline(cin,street);
	  	cout<<"\n city :";getline(cin,city);
	  	cout<<"\n state :";getline(cin,state);
	  	cout<<"\n pincode :";getline(cin,pincode);
	  	
	  	 addr = street+ " , " +city+ " , " +state+ " , " +pincode+ " . ";
	  	 
	  }
};
class student{
	private:
		string name;
		int roll_no,marks,clas;
		char grade;
		address Address;
		public:
			student(string name,int a,int b,int c,address& addr){
				this->name=name;
				this->clas=a;
				this->roll_no=b;
				this->marks=c;
				this->Address=addr;
			}
			void calculate_grade(){
				if(marks>=90){
					grade = 'A';
				}else if(marks>=80){
					grade = 'B';
				}else if(marks>=60){
					grade = 'C';
				}else if(marks>=40){
					grade = 'D';
				}else{
					grade =  'E';
				}
			}
			
			void display_data(){
				cout<<"\n Name :"<<name;
				cout<<"\n Class :"<<clas;
				cout<<"\n Roll_no :"<<roll_no;
				cout<<"\n Marks :"<<marks;
				cout<<"\n Address :"<<Address.addr;
			}
			
};

int main(){
	int roll_no,marks,clas;
	string name;
	address addr1,addr2;
	
	cout<<"\n student 1 ";
	cout<<"\n Enter your name :";
	cin>>name;
	cout<<"\n Enter your roll_no : ";
	cin>>roll_no;
	cout<<"\n Enter your marks :";
	cin>>marks;
	cout<<"\n Enter your class : ";
	cin>>clas;
	
	addr1.get_address();
	student student1(name,clas,roll_no,marks,addr1);
	
	cout<<"\n student 1 ";
	cout<<"\n Enter your name :";
	cin>>name;
	cout<<"\n Enter your roll_no : ";
	cin>>roll_no;
	cout<<"\n Enter your marks :";
	cin>>marks;
	cout<<"\n Enter your class : ";
	cin>>clas;
	addr2.get_address();
	student student2(name,clas,roll_no,marks,addr2);
	
	student1.display_data();
	cout<<"\n";
	student2.display_data();
}