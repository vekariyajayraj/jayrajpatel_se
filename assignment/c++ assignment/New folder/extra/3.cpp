#include<iostream>
#include<string>
using namespace std;

class person{
protected:
    string name;
    int age;
public:
    void get_person_data(){
        cout<<"\nEnter your name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void print_person_data(){
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};

class student: public person{
public:
    float percentage;
    void get_percentage(){
        cout<<"\nEnter percentage: ";
        cin>>percentage;
    }
    void print_percentage(){
        cout<<"\nPercentage: "<<percentage;
    }
};

class teacher: public person{
public:
    float salary;
    void get_salary(){
        cout<<"\nEnter your salary: ";
        cin>>salary;
    }
    void print_salary(){
        cout<<"\nSalary: "<<salary;
    }
};

int main(){
    int choice;
    student s;
    teacher t;
    cout<<"Select option:\n1) Student\n2) Teacher\n3) Exit\n";
    cin>>choice;
    switch(choice){
        case 1:
            s.get_person_data();
            s.get_percentage();
            s.print_person_data();
            s.print_percentage();
            break;
        case 2:
            t.get_person_data();
            t.get_salary();
            t.print_person_data();
            t.print_salary();
            break;
        case 3:
            cout<<"Exiting...";
            break;
        default:
            cout<<"Invalid choice!";
    }
    return 0;
}
