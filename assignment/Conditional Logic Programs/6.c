/*
6. Find the Character Is Vowel or Not
*/

#include<stdio.h>
int main(){
	char c;
	printf("\n Enter any character from a to z : ");
	scanf(" %c",&c);
	
	if(c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c =='A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
		printf("\n Your character is Vowel");
	}else {
		printf("\n Your character is not Vowel");
	}
	
	
}





