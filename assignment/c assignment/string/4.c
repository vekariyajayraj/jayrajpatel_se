/*
4. Write a program in C to count the total number of words in a string.
*/

#include<stdio.h>
int main(){
	char a[100];
	int i,count=0;
	
	printf("\n Enter string (<100 characters) : ");
	gets(a);
	
	for(i=0;a[i]!=0;i++){
		if(a[i]==' '){
			if(a[i+1]!=' '){
				count++;	
			}
		}
	}
	printf("\n Number of words in this string is %d",count+1);
}
