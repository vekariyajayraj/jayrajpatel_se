#include<iostream>
using namespace std;
class student{
	protected:
		char name[30];
		int science,maths,english;
		
		public:
			void get_data(){
				cout<<"\n name :";
				cin>>name;
				cout<<"\n science :";
				cin>>science;
				cout<<"\n maths :";
				cin>>maths;
				cout<<"\n english :";
				cin>>english;
				
			}
};
class sports{
	protected:
		int sp_mark;
		
		public:
			void sp_mark(){
				cout<<"\n Enter your sport mark :";
				cin>>sp_mark;
				
			}
				
};
class result:public student,public sports{
	public:
		int total;
		
		void cal_total(){
					total = science + maths + english + sp_mark;
					
				}
				void print_result(){
					cout<<"\n name : "<<name;
					cout<<"\n total :"<<total;
					
				}
};
int main(){
	result r1;
	r1.sp_mark();
	r1.cal_total();
	r1.get_data();
	r1.total;
	r1.print_result();
}