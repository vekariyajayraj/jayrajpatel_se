/*
4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

#include<iostream>
using namespace std;
class account{
		private:

     	    int amount,account_number;
			float balance;
		public:
			void get_data(){
 					cout<<"\n Enter your bank account number :";
   					cin>>account_number;
   					cout<<"\n Enter your opening bank_balance :";
   					cin>>balance;
			 }
			void deposite(){
				 	cout<<"\n Enter your amount to deposite :";
				 	cin>>amount;
				 	balance=amount+balance;
				 	cout<<"\n your deposited Rs."<<amount;
					cout<<"\n your available balance is :"<<balance;
			}
			void withdraw(){
			        cout<<"\n Etner your amount to withdraw :";
			        cin>>amount;
			    if(amount<balance){
			    	balance=balance-amount;
			    	cout<<"\n your withdraw Rs."<<amount;
			    	cout<<"\n your available balance is :"<<balance;
				}else{
					cout<<"\n Not available in your bank accuont.....!!! ";
				}
			}
					
};

int main(){
	account a1;
	a1.get_data();
	a1.deposite();
	a1.withdraw();
}