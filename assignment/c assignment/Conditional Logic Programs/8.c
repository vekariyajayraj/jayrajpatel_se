/*
8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.
*/

/*
	dwarf <150
	average <165
	tall <195
	abnormal >195
*/


#include<stdio.h>
int main(){
	int h; 		//h = Height	
	printf("\n Enter your Height in centimeters : ");
	scanf("%d",&h);
	
	if(h<150){
		printf("\n You are Dwarf");
	}else if(h>=150 && h<165){
		printf("\n Your hight is average");
	}else if(h>=165 && h<195){
		printf("\n You are tall");
	}else {
		printf("\n Your hight is abnoraml");
	}

}



