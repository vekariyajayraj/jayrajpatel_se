//13.calculate the Factorial of a Given Number using while loop.

#include <stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter your number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
}
		