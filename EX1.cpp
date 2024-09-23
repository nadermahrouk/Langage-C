#include <stdio.h>


int main(){
	
	int   a =5  ; 
	int   b = 6 ; 
	int   c = 0 ;
	
	printf("a = %d \n",a);
	printf("b  = %d \n",b);
	
	c=a ; 
	a=b ;
	b=c ;
	
	
	
	printf(" apres \n");
	printf(" a  = %d \n",a);
	printf(" b  = %d \n",b);
	return 0 ; 
}
