#include<stdio.h>
void myarray();
int main()
{
  myarray();
}
void myarray(){
	int i=0, number[5];
 for(i=0; i<5; i++) 
 {
  printf("Enter your Number[%d]:",i);
  scanf("%d",&number[i]);
 }
}