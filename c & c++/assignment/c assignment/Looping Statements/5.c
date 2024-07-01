//5.WAP to print factorial of given number.

#include <stdio.h>
int main(){
  int i, a = 1,num;
  printf("Emter the number : "); 
  scanf("%d", &num);  
  for(i = 1;i<=num;i++) {
  
      a = a * i;  
	printf("The Factorial of %d is: %d\n", num, a);
}
}
