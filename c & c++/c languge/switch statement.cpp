#include<stdio.h>
main(){
 int days;
printf("Enter your day here : ");
scanf("%d",&days);
switch(days){
	case 1 :
		printf("monday");
		break;
	case 2 :
		printf("Tuesday");
		break;
	case 3 :
		printf("wednsday");
		break;
	case 4 :
		printf("thusday");
		break;
	case 5 :
		printf("friday");
		break;
	case 6 :
		printf("saturday");
		break;
	case 7 :
		printf("sunday");
		break;
	default:
		printf("invaild input");
		break;
		}	
}
