/*
14.Write a program in C to combine two strings manually
*/

#include<stdio.h>
#include<string.h>

void combine(char x[],char y[]); 		// for function 1
//void combine(char x[],char y[],int i);	// for function 2

int main(){
	char a[20],b[20];
	int i,l1;
	
	printf("\n Enter string 1 : ");
	gets(a);
	
	printf("\n Enter string 2 : ");
	gets(b);
	
//	// manually combine strings
//	l1=strlen(a);
//	for(i=0;b[i]!='\0';i++){
//		a[l1++]=b[i];
//	}
	
//	// using inbuilt function
//	strcat(a,b);

	// by making function
	combine(a,b);		// function 1	
//	combine(a,b,0);		// function 2   using recursion
	printf(a);
}

void combine(char x[],char y[]){
	int i,l1;
	l1=strlen(x);
	for(i=0;y[i]!='\0';i++){
		x[l1++]=y[i];
	}
}


// 	// by using recursion
//void combine(char x[],char y[],int i){
//	int l1;
//	l1=strlen(x);
//	if(y[i]!='\0'){
//		x[l1++]=y[i];
//		combine(x,y,i+1);
//	}else{
//		return;	
//	}
//}
