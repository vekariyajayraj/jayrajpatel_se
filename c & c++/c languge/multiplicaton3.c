#include<stdio.h>
main(){
	int i,num[5];
	for(i=0;i<5;i++)
	{
		printf("enter your number here :");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)	
	{
		printf("your numbers are : %d \n",num[i]);
	}
}
