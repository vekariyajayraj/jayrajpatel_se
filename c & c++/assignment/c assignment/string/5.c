/*
5. Write a program in C to compare two strings without using string library
functions.
*/

#include<stdio.h>
//#include<string.h>

int compare(char x[],char y[],int n);

int main(){
	char a[20],b[20];
	int i,status=0;
	
	printf("\n Enter string 1 : ");
	gets(a);
	
	printf("\n Enter string 2 : ");
	gets(b);


// 	//we can use this insted of recursive funcction
//	for(i=0;a[i]!='\0';i++){
//		if(a[i]!=b[i]){
//			status=1;
//		}
//	}


	status=compare(a,b,0);

	if(status==0){
		printf("\n strings are same");
	}else{
		printf("\n strings are not same");
	}	
}

int compare(char x[],char y[],int n){
	int l;
	l=sizeof(x);
	
	if(x[n]!='\0'){
		if(x[n]!=y[n]){
			return 1;
		}else{
			return compare(x,y,n+1);
		}
	}
}
