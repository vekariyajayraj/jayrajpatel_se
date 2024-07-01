/*
5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice
*/

#include<stdio.h>
int c[5],i,j,k;

void accending();
void decending();

int main(){
	int q;
	
	for(i=0;i<5;i++){
		printf(" Enter a[%d] : ",i);
		scanf("%d",&c[i]);
	}
	
	printf("\n 1). print in accending order \n 2). print in decending order\n      ");
	scanf("%d",&q);
	if(q==1){
		accending();	
	}else if(q==2){
		decending();	
	}else{
		printf("\n wrong choice");	
	}
}


 void accending(){
 	int b;
 	//assending order
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(c[i]>c[j]){
				b=c[i];
				c[i]=c[j];
				c[j]=b;
			}
		}
	}
	for(k=0;k<5;k++){
		printf(" %d ",c[k]);
	}
 }
 
 void decending(){
 	int b;
 	// decending order
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(c[i]<c[j]){
				b=c[i];
				c[i]=c[j];
				c[j]=b;
			}
		}
	}
	for(k=0;k<5;k++){
		printf(" %d ",c[k]);
	}
 }
 
 
