#include<stdio.h>
void main ()
{
	int numbers[10],even[10],odd[10],i,j=0,k=0,totaleven=0,totalodd=0;
	for (i=0;i<10;i++)
	{
		printf("Enter your values here : ");
		scanf("%d",&numbers[i]);
		if(numbers[i]%2==0){
			even[j]=numbers[i];
			totaleven+=numbers[i];
			j++;
		}else{
			odd[k]=numbers[i];
			totalodd+=numbers[i];
			k++;
		}
	}  printf("\n This is your even array : ");
	for(i=0;i<j;i++){
		printf("\t %d",even[i]);
	}  printf("\n This is your odd array : ");
	for(i=0;i<k;i++){
		printf("\t %d",odd[i]);
	}
	printf("\n This is your total of even %d",totaleven);
	printf("\n This is your total of odd %d",totalodd);
}
