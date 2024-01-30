//6.WAP to print Fibonacci series up to given numbers.

#include <stdio.h>
int main() {

  int i, n;
  int a1=0,a2=1;
  int b=a1+a2;
  printf("Enter the number : ");
  scanf("%d",&n);
  printf("Fibonacci is : %d, %d, ",a1,a2);
  for (i=3;i<=n;++i) {
    printf("%d",b);
    a1=a2;
    a2=b;
    b=a1+a2;
  }
}
