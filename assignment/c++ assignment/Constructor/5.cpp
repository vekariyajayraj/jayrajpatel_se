/*
5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include<iostream>
using namespace std;
class triangle{
	private:
		int s1,s2,s3;
	public:
		void get_data(){
			cout<<"\n Enter your triangle first side : ";
			cin>>s1;
			cout<<"\n Enter your triangle second side : ";
			cin>>s2;
			cout<<"\n Enter your triangle third side : ";
			cin>>s3;
		}
		void determin_tri(){
			if(s1==s2  &&  s2==s3){
				cout<<"\n your triangle is equilateral ";
			}else if(s1==s2 || s2==s3 || s1==s3){
				cout<<"\n your triangle is isosceles ";
			}else{
				cout<<"\n your triangle is scalene ";
			}
		}
};

int main(){
	triangle t1;
	t1.get_data();
	t1.determin_tri();
}