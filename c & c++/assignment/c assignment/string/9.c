/*
9. Write a program in C to find the maximum number of characters in a string.
(ex) = hello some one how are you. // maximum number of character is in "hello" and is equal to 5
*/

#include<stdio.h>

int main(){
	char a[100];
	int i,count=0,n=0;
		
	printf("\n Enter string : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		count++;
		if(a[i]==' '){
			if(count>n){
				n=count-1;
			}count=0;
		}else if(a[i+1]=='\0'){
			if(count>n){
				n=count;
			}
		}
	}
	printf("\n Max number of character is %d",n);	
}
