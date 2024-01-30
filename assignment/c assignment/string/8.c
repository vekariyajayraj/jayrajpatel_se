/*
8. Write a program in C to count the total number of vowels or consonants in a
string
*/

#include<stdio.h>
int main(){
	char a[50];
	int i,v=0,c=0;
	
	printf("\n Enter string : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a' && a[i<='z']) || (a[i]>='A' && a[i]<='Z')){
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
				v++;
			}else{
				c++;
			}
		}
	}
	printf("\n Total vowels in string is %d",v);
	printf("\n Total consonants in string is %d",c);
}
