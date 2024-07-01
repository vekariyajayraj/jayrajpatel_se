//Series Program:
//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main(){
	int a,b,i;
	printf("\n Enter value for series (1*1) + (2*2) + (3*3)....+ (n*n) : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		b=b+i*i;
	}
	printf("\n Ans of series is = %d",b);
	
	
}
