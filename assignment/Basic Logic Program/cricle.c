#include<stdio.h>
void main(){
	float radius, area, cf; 
	printf("Enter your number:\n ");
	scanf("%f",&radius);
	
	area=3.14*radius*radius ;
	pritnf("The area of cricle is %f : ",area);
	
	cf=2*3.14*radius ;
	printf("The cricumference of cricle %f : ",cf);
}
