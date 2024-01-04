/*
9. C Program to Check Uppercase or Lowercase or Digit or Special
Character
*/

# include<stdio.h>
int main(){
	char c; 		// use input
	printf("\n Enter any character, number, or special character : ");
	scanf(" %c",&c);
	
	if((int)c>=65 && (int)c<=90){
		printf("\n  %c is upper case",c);
	}else if((int)c>=97 && (int)c<=122){
		printf("\n  %c is lower case",c);
	}else if((int)c>=48 && (int)c<=57){
		printf("\n  %c is Number",c);
	}else {
		printf("\n  %c is special character",c);
	}
		
}

/*
special character
33 to 47
58 to 64
91 to 96
123 to 126


upper case
65 to 90 

lower case
97 to 122

number 
48 to 57
*/





