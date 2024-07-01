//1. Write a program to find out the max number from given array using function
// with return type without argeument

#include<stdio.h>
int largestvalue();  
int main(){
	int b;
	b=largestvalue();	
	printf("\n Largest value is %d",b);
}


int largestvalue(){ 
	int i,j,n[10],a=0;
	
	for(i=1;i<10;i++){
		printf("\n Enter value %d : ",i);
		scanf("%d",&n[i]);
	}
	
		for(j=0;j<10;j++){
		if(a<n[j]){
			a=n[j];
		}
	}
	return a;

}
