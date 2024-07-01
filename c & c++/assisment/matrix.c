#include<stdio.h>
int main(){
	int m,n, sum=0;
	int a[2][2], b[2][2], result[2][2];
	int i,j,k;
	printf("Enter your first matrix :");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		//	printf("Enter the %d %d  element of first matrix \n :", i ,j );
			scanf("%d",&a[i][j]);
			 printf("\t");
		}
	//	printf("\n");
	}
	printf("Enter your second matrix :");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			//printf("Enter the %d %d  element of first matrix \n :", i ,j );
			scanf("%d",&a[i][j]);
			 printf("\t");
		}
	//	printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				sum += a[i][k] * b[k][j];
			}
			result[i][j] = sum;
			sum=0;
			
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d \t",result[i][j]);
			
		}
		printf("\n");
	}
}