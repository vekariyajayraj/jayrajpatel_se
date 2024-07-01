#include<stdio.h>
#include<string.h>
void tables(int);
void main(){
	int tabes;
	char choice[3];
	while(1){
		printf("Enter your values you want to print : ");
		scanf("%d",&tabes);
		tables(tabes);
		printf("Do you want to print another table ? yes or no ");
		scanf("%s",&choice);
		if(strcmp(choice,"yes")==0||strcmp(choice,"yes")==0){
			
		}else{
			printf("Thanks for using my program");
			break;
		}
	}
}
void tables (int num){
	int i;
	for(i=1;i<=10;i++){
		printf("%d * %d = %d \n",num,i,num*i);
	}
}
