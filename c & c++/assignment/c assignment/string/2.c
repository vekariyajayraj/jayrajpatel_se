/*
2. Write a program in C to separate individual characters from a string.
*/

#include<stdio.h>
int main(){
	char a[20];
	int i,count=0;
	
	printf("\n Enter the string : ");
//	while(getchar()!='\n'); // this line of code is used to resolve buffering issues of 'gets' if occcurs otherwise comment it out 
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		printf(" %c, ",a[i]);
		count++;
	}
	printf("\n All %d characgters are saperated from string",count);
}
