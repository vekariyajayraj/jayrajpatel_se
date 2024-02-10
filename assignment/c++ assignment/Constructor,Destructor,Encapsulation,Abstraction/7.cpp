/*
7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/

#include<iostream>
using namespace std;
class date{
   	private:
   		int days,month,year,leap;
   		int valid_days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   	public:
   		void get_data(){
   			cout<<"\n Enter the dyas : ";
   			cin>>days;
   			cout<<"\n Enter the month : ";
   			cin>>month;
   			cout<<"\n Enter the year : ";
   			cin>>year;
		   }
		void validate(){
			leap=leap_year();
			if(leap == 1){
				if(month == 2){
					if(days <= valid_days[month]+1){
						cout<<"\n  Date is valid";
					}else{
						cout<<"\n Date is not valid";
					}
				}else{
					if(days <= valid_days[month]){
						cout<<"\n "<<days<<"/"<<month<<"/"<<year;
						cout<<"\n Date is valid";
					}else{
						cout<<"\n Date is not valid";
					}
				}		
			}
		}
		int leap_year(){
			if((year%4==0  && year%100 !=0)||(year%400 == 0)){
				return 1;
			}else{
				return 0;
			}
		}
};
int main(){
	date d1;
	d1.get_data();
	d1.validate();
}