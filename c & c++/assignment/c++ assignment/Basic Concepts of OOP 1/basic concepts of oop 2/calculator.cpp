#include<iostream>
using namespace std;
class calculator{
	public:
		int a,b;
		void get_data(){
		
		cout<<"\n Enter your number :";
		cin>>a;
		cout<<"\n Enter your number :";
		cin>>b;
	}
		
	
	void print(){
		cout<<"\n sum of tow number is"<<a+b;
		cout<<"\n sub of tow number is"<<a-b;
		cout<<"\n div of tow number is"<<a/b;
		cout<<"\n mul of tow number is"<<a*b;
		
	}
		
	
};
int main(){
	calculator s1;
	s1.get_data();
	s1.print();
	}