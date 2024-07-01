/*
13.Write a program in C to remove characters from a string except alphabets.
*/

#include<stdio.h>

void filter(char x[]);

int main(){
	char a[100];
//	char b[100];
//	int i,j=0;
	
	printf("\n Enter the string : ");
	gets(a);


// 	// without making function 
 
//	for(i=0;a[i]!='\0';i++){
//		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
//			b[j]=a[i];
//			j++;
//		}
//	}
//	printf("%s",a);
//	printf("\n\n%s",b);
	
	filter(a);
	printf(a);
	
}

void filter(char x[]){
	int i,j=0;
	for(i=0;x[i]!='\0';i++){
		if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')){
			x[j]=x[i];
			j++;
		}	
	}
	x[j]='\0';
}
