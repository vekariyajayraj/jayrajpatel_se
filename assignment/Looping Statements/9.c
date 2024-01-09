//9.Write a program make a summation of given number.

#include <stdio.h>
int main() {
    int n,i,sum = 0;
    
    printf("Enter the number: ");
    scanf("%d",&n);

    for (i=1;i<=n;++i) {
        sum += i;
    }
    printf("Sum = %d", sum);
}

