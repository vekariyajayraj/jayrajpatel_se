#include<iostream>
using namespace std;
class student{
	protected:
		int rollno,m1,m2,m3;
		char name[50];
		public:
			
			
/*			void user_data(){
				cout<<"\n Enter your name :";
				cin>>name;
				cout<<"\n enter your rollno  :";
                cin>>rollno;
				cout<<"\n Enter your m1 :";					/// user 
				cin>>m1;
				cout<<"\n Enetr your m2 :";
				cin>>m2;
				cout<<"\n Enter your m3	 :";
				cin>>m3;			
				
			}
			
			
*/
			void get_data(int x, char y[50], int z,int w,int a){
				rollno=x;
				strcpy(name,y); 
				m1=z;
				m2=w;
				m3=a;
				
			}
};
class result:public student{
	public:
		void print_data(){
			cout<<"\n Enter your name :"<<name;
			cout<<"\n Enter your  rollno : "<<rollno;
			cout<<"\n this total is "<<m1+m2+m3;
			
		}
};
int main(){
	result s1;
	s1.get_data(12,"jayraj patel",50,50,50);
	s1.print_data();
}