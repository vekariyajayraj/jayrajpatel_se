#include<stdio.h>
#include<string.h>
int main(){
	int l,i;
	char name[20],name2[20];
	gets(name);
	l=strlen(name);
	printf("%d",l);
	printf("\n");
	
	strcpy(name2,name);
	puts(name2);
	printf("\n");
	
	strcat(name,name2);
	puts(name);
	
	i=strcmp(name,name2);
	printf("%d",i);
}