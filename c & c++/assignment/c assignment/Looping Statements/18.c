//18.Write a C Program to Print the Multiplication Table of N.

#include <stdio.h>
int main() {
  int n,i;
  printf("Enter your table number: ");
  scanf("%d", &n);

  for (i=1;i<=10;++i) {
    printf("%d * %d = %d \n",n,i,n*i);
  }
}
