#include<stdio.h>
int main() {
	int i,j,k,r,c,sum=0;
	int a[10][10],b[10][10],m[10][10];
	printf("Enter row size : ");
	scanf("%d",&r);
	printf("Enter column size : ");
	scanf ("%d",&c);
	
	
	printf(" Enter %d%X%d  elements of A:\n",r,c);
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter %d%X%d elements of b:\n",r,c);
	for (i=0;i<r;i++)
	{
		for( j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=0;
			for(k=0;k<c;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			m[i][j]=sum;
		}
	}
	printf("\nmultipalication of matrix A and B:\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}






















