#include <stdio.h>
int main()
{
    int n, sum=0, firstnumber, lastnumber;
    printf("Enter the number: ");
    scanf("%d", &n);
    lastnumber=n%10;
    while(n>=10)
    {
       n=n/10;
    }
    firstnumber=n;
    sum = firstnumber+lastnumber;
    printf("Sum of firstnumber and lastnumber = %d", sum);
    return 0;
}