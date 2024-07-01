#include <stdio.h>
int aarray();
int main() {
	
    aarraya();
    aarrayb();
    aarrayc();
	aarrayd();

}
int aarraya(){
	int i;

    printf("Even numbers between 1 to 10:\n");

    for (i = 1; i <= 10; i++) 
    {
        if(i%2 == 0) 
        {
            printf("\t%d ", i);
        }
    }
    return 0;
}
int aarrayb(){
	int i ;
	printf("\nodd numbers between 1 to 10:\n");
	for(i=1;i<=10;i++){
		if(i%2!=0){
			printf("\t%d ", i);
		}
	}
}
int aarrayc(){
    int t,i;
   
    for(i=1;i<=10;i++){
    	if(i%2!=0){
    		printf("\n%d",i);
		}	
	}
	t=i+i;
	
    printf("\n odd numbers sum 25",t);
}
int aarrayd(){
	int t,i;
   
    for(i=1;i<=10;i++){
    	if(i%2==0){
    		printf("\n%d",i);
		}	
	}
	t=i+i;
	
    printf("\n even numbers sum 30",t);
}
















