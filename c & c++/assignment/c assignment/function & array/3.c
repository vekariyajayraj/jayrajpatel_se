/*
3. WAP to find reverse of string using recursion
*/


#include<stdio.h>
#include<string.h>
void reverse_print_only(char a[],int n);
void do_reverse(char a[],int s, int e);

int main(){
	char b[20];
	
	printf("\n Enter the string : ");
	gets(b);
//	fgets(b,sizeof(b),stdin);

//	reverse_print_only(b,sizeof(b));		// it will print reverse of string 
	do_reverse(b,0,strlen(b)-1);			// it will make reverse of string 
	printf("\n	%s",b);
}

void reverse_print_only(char a[], int n){
	if(n>=0){
		printf("%c",a[n]);
		reverse_print_only(a,n-1);
	}else{
		return;
	}
}

void do_reverse(char a[],int s, int e){
//	char temp;
	if(s<e){
		char temp=a[s];
		a[s]=a[e];
		a[e]=temp;
		
		do_reverse(a,s+1,e-1);
	}else{
		return;
	}
}
