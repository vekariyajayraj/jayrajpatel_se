/*
6. Write a program in C to count the total number of alphabets, digits and special
characters in a string.
*/

#include<stdio.h>
int main(){
	char a[50];
	int i,c=0,n=0,s=0;
	
	printf("\n Enter the string :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
			c++;
		}else if(a[i]>='0' && a[i]<='9'){
			n++;
		}else{
			s++;
		}
	}
	printf(" total alphabets are '%d'\n total digitas are '%d'\n total special character including space are '%d'",c,n,s);
}
