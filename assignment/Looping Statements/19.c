#include<stdio.h>
int Pattern();

int main(){
	patterna();
	patternb();
	patternc();
	patternd();
	patterne();
}

int patterna(){
	int i,j;
	int n=1;
	
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",n);
			n++;
		}
		printf("\n");
	}
}
int patternb (){
	char i,j;
	for (i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
int patternc(){
	int n=5;
	int i,j;
	char ch='A';
	
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
			
			if (ch<'Z')
			ch++;
			else 
			ch='A';
			
		}
		printf("\n");
	}
}

int patternd(){
	int n=7;
	int i,j;
	int x=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*x;j++)
		{
		if(j<=x)
		printf("*",j+64);
		else
		printf("*",64+2*x-j);
	}
	if (i<=n/2)
	x++;
	else
	x--;
	printf("\n");
	}
}

int patterne(){
	int n =5;
	int i,j;
	
	for  (i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",j%2);
		}
		printf("\n");
	}
}
