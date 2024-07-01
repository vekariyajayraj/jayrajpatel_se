//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main()
{
	
	int num;
	printf("\nEnter The Number :");
	scanf("%d", &num);
	printf("\nOutput Is\n\n");
	printf("%d  ,%d  ,%d \n\n", num, num *num, num *num *num);
	return 0;
}
