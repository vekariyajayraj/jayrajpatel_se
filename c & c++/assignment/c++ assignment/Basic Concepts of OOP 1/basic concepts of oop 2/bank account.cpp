#include<iostream>
using namespace std;

class Account {
private:
    int acc_no;
    char type_acc[10];
    char name[20];
    int balance = 500;  // balance
    int amount;

public:
    

    void get_value() {
        cout<< "\n Enter your account no: ";
        cin>>acc_no;

        cout<<"\n Enter your name: ";
        cin>> name;

        cout<<"\n Enter your type of account: ";
        cin>> type_acc;

        cout<<"\n Your current balance is: " << balance;
    }

    void deposit(){
        cout <<"\n Enter your deposit amount: ";
        cin>>amount;
        balance = balance+amount;
        cout<<"\n Your available balance is: "<<balance;
    }

    void withdrawal(){
        cout<<"\n Enter your withdrawal amount: ";
        cin>> amount;

        if (amount>balance){
            cout<< "Insufficient balance";
        } else {
            balance = balance-amount;
            cout<< "\n Your balance is: "<<balance;
        }
    }

    void print(){
        cout<<"\n Account no: "<<acc_no<< "\n Your name is "<<name<< "\n Your account balance: " <<balance<< "\n Your account type is "<<type_acc<< "\n Amount is: "<<amount;
    }
    void choice(){
        int ch;
        cout<<"\n 1. Deposit"<<"\n 2. Withdraw"<<"\n 3. Check account details";
        cout<< "\n Enter your choice: ";
        cin>>ch;

        switch (ch) {
            case 1:
                get_value();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdrawal();
                break;
            default:
                cout << "\n Invalid choice";
        }
    }
};

int main() {
    Account s1;
    s1.get_value();
    s1.deposit();
    s1.withdrawal();
    s1.print();
    s1.choice();
}
