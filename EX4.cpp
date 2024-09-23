#include <stdio.h>

int main( ){
	int a ; 
	int b ;
	int c ;
	
	int min = 0 ; 
	
	
	printf("saisir un entier 1 \n ");
	scanf("%d", &a); 
	
	printf("saisir un entier 2 \n ");
	scanf("%d", &b); 
	
	printf("saisir un entier 3 \n ");
	scanf("%d", &c); 
	
	if ( a< b ){
		min = a ; 
		if ( c < min ){
			min = c ; 
		}
		
	}else {
		min = b ; 
		if ( c < min ){
			min = c ; 
		}
	}	
	
	printf( "le minimum = %d ", min);
	
}


