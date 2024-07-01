/*
3. Write a program in C to print individual characters of a string in reverse order
*/

#include<stdio.h>
int main(){
	char a[30];
	int i,count=0;
	
	printf("\n Enter the string :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=count-1;i>=0;i--){
		printf(" %c, ",a[i]);
	}
	printf("\n all characters from string is printed individually in reverse order");
}
