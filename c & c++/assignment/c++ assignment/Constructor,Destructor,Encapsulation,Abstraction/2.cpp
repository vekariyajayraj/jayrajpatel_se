/*
2). Write a program of Addition, Subtraction, Division, Multiplication using
	constructor.
*/

#include<iostream>
using namespace std;
class calculation{
	private:
		int sum,sub,mul;
		double v1,v2;
		float div;
		
		public:
			calculation(){
				cout<<"\n first  calculation using constructor :";
				
			}
			
		calculation(int a,int b){
			a=v1;
			b=v2;
			sum=v1+v2;
			sub=v1-v2;
			mul=v1*v2;
			div=v1/v2;
			
		}	
		void p_sum(){
			cout<<"\n your sum is :"<<sum;
			
		}
		cout<<"\n your sub is : "<<sub;oid p_mul(){
			
			
		}cout<<"\n your mul is : "<<mul;
		void p_div(){
			
		}cout<<"\n your div is :"<<div;
};
int main(){
	int x,y;
	calculation c2;
	
	
	cout<<"\n Enter the first value : ";
	cin>>x;
	cout<<"\n Enter the second value :";
	cin>>y;
	
	calculation c1(x,y);
	c1.p_sum();
	c1.p_sub();
	c1.p_mul();
	c1.p_div();
}