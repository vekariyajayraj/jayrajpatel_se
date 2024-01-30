//16.Calculate the Sum of Natural Numbers Using the While Loop.
#include <stdio.h>
int main() {
  int i,sum=0;
    
  while (i<=5) {
    printf("%d\n", i);
    sum+=i;
    ++i;
  }
  printf("sum=%d",sum);
}