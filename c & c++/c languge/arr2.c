#include<stdio.h>
void main(){
	int i,arr[5];
	for (i=0;i<5;i++){
		printf("Enter your numbers here : ");
		scanf ("%d",&arr[i]);
	}
	for (i=0;i<5;i++){
		printf("%d \n",arr[i]);
	}
}
