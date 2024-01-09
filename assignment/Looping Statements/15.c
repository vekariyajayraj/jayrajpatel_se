//15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>
int main() {
  int i,n,sum=0;
  
    printf("Enter your number: ");
	scanf("%d",&n);  
  while (i<=10) {
    printf("%d\n",i);
    sum += i;
    ++i;
  }
  printf("sum=%d",sum);
}

