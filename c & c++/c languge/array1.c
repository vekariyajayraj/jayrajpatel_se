#include<stdio.h>
void main()
{
	int num[5],i;
	for (i=0;i<5;i++){
		printf("Enter your array here : ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
		printf("This is your values of your array : %d \n",num[i]);
	}
}
