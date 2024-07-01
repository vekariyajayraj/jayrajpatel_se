#include <stdio.h>
int main() {
    float  a, b, c, d, e;
           
    
    printf("\n Enter the first number: "); 
    scanf("%f", &a);
    printf("\n Enter the second number: ");
    scanf("%f", &b);
    printf("\ Enter the third number: ");
    scanf("%f", &c);

    if(a < (b+c) && b < (a+c) && c < (c+a)) 
     {  
        d = a+b+c; 
        printf("\nPerimeter  = %.1f\n", e);  
    }
    else
    {
        printf("Not possible to create a triangle..!"); 
    }
    
    
}

