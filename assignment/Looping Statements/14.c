//14.Accept 5 numbers from user and find those numbers factorials.

#include<stdio.h>
int main(){

    int i,f=1,n;

    printf("Enter the number:");
    scanf("%d",&n); 

    for(i=1;i<=n;i++)
        f=f*i; 

    printf("Factorial of %d is: %d",n,f);

}