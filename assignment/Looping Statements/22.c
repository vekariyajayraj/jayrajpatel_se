// 22. Accept 3 numbers from user using while loop and check each numbers palindrome


#include<stdio.h>
int main(){
	int n,a,b,c;
	printf("\n Enter number to check palindrome : ");
	scanf("%d",&n);
	c=n;
	while(n!=0){                             
		a=n%10;
		b=b*10+a;
		n=n/10;
	}	
	if(c==b){
		printf("\n number %d is palindrome",c);
	}else{
		printf("\n number %d is not palindrome",c);
	}
}
