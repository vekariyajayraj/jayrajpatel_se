//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
int main()
{
  int i,n,even=0,odd=0;
   printf("\nEnter the number:");
   scanf("%d",&n);
   printf("\nEven numbers:");
   while(i<=n)
   {
      if(i%2==0)
      {
        printf("\n%d",i);
        even++;
      }
      i++;
   
   }
   printf("\nOdd numbers:");
   i=1;
   while(i<=n)
   {
     if(i%2==1)
     {
        printf("\n%d",i);
        odd++;
     }
     i++;
   }
   printf("\nTotal even numbers:%d",even);
   printf("\nTOtal odd numbers:%d",odd);
}