/*
15.Write a program in C to find the largest and smallest words in a string.
*/

// work not cmpleted


#include<stdio.h>
#include<string.h>

int main(){
	char a[100],m[20],n[20],b[20];
	int i,j,c=0,d=0,e=100;
	
	printf("\n Enter string : ");
	gets(a);
		
	for(i=0;a[i]!='\0';i++){
		c++;
		b[j++]=a[i];
		if(a[i]==' ' || a[i+1]=='\0'){
			b[j]='\0';
			if(c>d){
				(a[i]==' ')?(d=c-1):(d=c);
				strcpy(m,b);
			}
			if(c<e){
				(a[i]==' ')?(e=c-1):(e=c);
				strcpy(n,b);
			}
			c=0;
			j=0;
		}		
	}
	printf("\n largest word * %s* have '%d' character",m,strlen(m));
	printf("\n smallest word * %s* have '%d' characters",n,strlen(n));
}
