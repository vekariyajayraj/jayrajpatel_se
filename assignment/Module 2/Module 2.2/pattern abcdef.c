#include<stdio.h>
int main (){
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
