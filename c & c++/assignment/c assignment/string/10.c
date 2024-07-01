/*
10.Write a program in C to extract a substring from a given string
*/

#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int position,length,l;
	
	printf("\n Enter string : ");
	gets(a);
	
	printf("\n Enter position from whare you want a substring : ");
	scanf("%d",&position);
	printf("\n Enter length of substring : ");
	scanf("%d",&length);
	
	
//	strncpy(b,a+(position-1),length);	// copy substring from string 
//	printf(b);							// print substring
	
	int i,j=0;
	for(i=position-1;i<=(position+length-1);i++){
		b[j]=a[i];
		j++;
	}
	printf(b);
}
