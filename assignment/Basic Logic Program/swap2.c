#include<stdio.h>  
int main(){  
    int a, b;  
  
    printf("\n Enter two numbers :");  
    scanf("%d %d", &a, &b);  
  
    printf("You entered a = %d and b = %d\n", a, b);  
    a = a * b;  
    b = a / b;  
    a = a / b;  
    printf("After swapping a = %d and b = %d\n", a ,b);  
    
}  
