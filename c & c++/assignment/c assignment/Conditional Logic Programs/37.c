/*
37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/

#include<stdio.h>
int main(){
	int a;
	char c;
	
	printf("\n Enter day number : ");
	scanf("%d",&a);
	
	switch(a){
		case 1 : printf("	monday"); break;
		case 2 : printf("	tuesday"); break;
		case 3 : printf("	wednesday"); break;
		case 4 : printf("	thursday"); break;
		case 5 : printf("	friday"); break;
		case 6 : printf("	saturday"); break;
		case 7 : printf("	sunday"); break;
		default : printf("day number is not valid");break;
	}
	
	printf("\n Enter any character (a to z) : ");
	scanf(" %c",&c);
	
	switch(c){
		case 'a': printf("	%c is Vowel",c); break;
		case 'b': printf("	%c is consonant",c); break;
		case 'c': printf("	%c is consonant",c); break;
		case 'd': printf("	%c is consonant",c); break;
		case 'e': printf("	%c is Vowel",c); break;
		case 'f': printf("	%c is consonant",c); break;
		case 'g': printf("	%c is consonant",c); break;
		case 'h': printf("	%c is consonant",c); break;
		case 'i': printf("	%c is Vowel",c); break;
		case 'j': printf("	%c is consonant",c); break;
		case 'k': printf("	%c is consonant",c); break;
		case 'l': printf("	%c is consonant",c); break;
		case 'm': printf("	%c is consonant",c); break;
		case 'n': printf("	%c is consonant",c); break;
		case 'o': printf("	%c is Vowel",c); break;
		case 'p': printf("	%c is consonant",c); break;
		case 'q': printf("	%c is consonant",c); break;
		case 'r': printf("	%c is consonant",c); break;
		case 's': printf("	%c is consonant",c); break;
		case 't': printf("	%c is consonant",c); break;
		case 'u': printf("	%c is Vowel",c); break;
		case 'v': printf("	%c is consonant",c); break;
		case 'w': printf("	%c is consonant",c); break;
		case 'x': printf("	%c is consonant",c); break;
		case 'y': printf("	%c is consonant",c); break;
		case 'z': printf("	%c is consonant",c); break;
		
		case 'A': printf("	%c is Vowel",c); break;
		case 'B': printf("	%c is consonant",c); break;
		case 'C': printf("	%c is consonant",c); break;
		case 'D': printf("	%c is consonant",c); break;
		case 'E': printf("	%c is Vowel",c); break;
		case 'F': printf("	%c is consonant",c); break;
		case 'G': printf("	%c is consonant",c); break;
		case 'H': printf("	%c is consonant",c); break;
		case 'I': printf("	%c is Vowel",c); break;
		case 'J': printf("	%c is consonant",c); break;
		case 'K': printf("	%c is consonant",c); break;
		case 'L': printf("	%c is consonant",c); break;
		case 'M': printf("	%c is consonant",c); break;
		case 'N': printf("	%c is consonant",c); break;
		case 'O': printf("	%c is Vowel",c); break;
		case 'P': printf("	%c is consonant",c); break;
		case 'Q': printf("	%c is consonant",c); break;
		case 'R': printf("	%c is consonant",c); break;
		case 'S': printf("	%c is consonant",c); break;
		case 'T': printf("	%c is consonant",c); break;
		case 'U': printf("	%c is Vowel",c); break;
		case 'V': printf("	%c is consonant",c); break;
		case 'W': printf("	%c is consonant",c); break;
		case 'X': printf("	%c is consonant",c); break;
		case 'Y': printf("	%c is consonant",c); break;
		case 'Z': printf("	%c is consonant",c); break;
		default: printf("\n Character is not valid"); break;
		
	}
}


