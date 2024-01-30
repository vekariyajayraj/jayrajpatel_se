//32.Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main (){
	int x,y,sum;
	printf("Enert the first numbers : ");
	scanf("%d",&x);
	
	printf("\n Enter the secound : ");
	scanf("%d",&y);
	
	sum=x+y;
	printf(" The sum of: %d\n",sum);
	
	printf("size of the sum: %d",sizeof(sum));
	
}
