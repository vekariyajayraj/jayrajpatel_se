#include<stdio.h>
main(){
	int n=5;
	int i,j;
	for (i=1;i<=5;i++)
	{ 
	for (j=1;j<=5;j++)
	{
//		if (i==j)
      if (j== n-i+1)
		{
			printf("$");
		}
		else 
		{
			printf ("*",j);
		}
	}
	printf("\n");
	}
}
