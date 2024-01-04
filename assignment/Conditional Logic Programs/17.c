/*
17.Write a C program to check whether a triangle can be formed with the given
values for the angles.
*/
/*
a,b,c angles 
a+b+c = 180 
if not than triangle is not formed

*/

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of 3 angles of triangle :");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c==180){
		printf("triagle can be formed");
	}else{
		printf("triangle can not be formed");
	}
}




