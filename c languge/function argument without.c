#include<stdio.h>
int sum();
main(){
	int ans ;
	ans=sum();
	printf("This is your ans %d",ans);
	
}
int sum(){
	int num,num1;
	printf("Enter your first number here : ");
	scanf("%d",&num);
	printf("Enter your second  number here : ");
	scanf("%d",&num1);
     ans=sum(num,num1);
     printf("This is your ans %d", ans);
}

int sun (){
	return num+num1;
}
