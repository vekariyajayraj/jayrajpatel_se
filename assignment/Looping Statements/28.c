/*
Series Program:

28. 1 2 3 6 9 18 27 54...
*/

#include<stdio.h>
int main(){
	int i,a,b;
	
	printf("\n Enter the value for series 1 2 3 6 9 18 27 54... : ");
	scanf("%d",&a);
	b=1;
	printf("  %d",b);
	for(i=2;i<=a;i++){
		if(i%2!=0){
			b=b*1.5;
		}else{
			b=b*2;
		}
		printf("\t%d",b);
	}
}
