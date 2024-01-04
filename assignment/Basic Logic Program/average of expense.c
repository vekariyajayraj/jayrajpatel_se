#include <stdio.h>
int main()
{

    int num=0;
    int counter=0;
    int sum=0;
    int i=0;
    float avg=0;

    printf("\nEnter the number: ");
    scanf("%d", &counter);

    for (num=1;num<=counter;num++)
    {
        printf("Please enter value %d :",num);
        scanf("%d",&i);
        sum +=i;
    }
    avg=sum/num;
    printf("The average is : %f\n",avg);
}
