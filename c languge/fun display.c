#include<stdio.h>
void display();
void main(){
	display();
}
void display(){
	int i,j;
	printf("Enter Where do you want to start : ");
	scanf("%d",&j);
	for(i=j;i<=50;i++){
		printf("%d \n",i);
	}
}
