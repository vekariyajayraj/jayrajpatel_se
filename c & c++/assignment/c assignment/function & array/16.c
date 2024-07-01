/*
16.Accept 5 numbers from user and perform sum of array
*/

#include<stdio.h>
int main(){
	int a[5],i,b=0;
	for(i=0;i<5;i++){
		printf("  Enter number %d : ",i+1);
		scanf("%d",&a[i]);
		b=b+a[i];
	}
	printf("\n Sum of all value is %d",b);
}