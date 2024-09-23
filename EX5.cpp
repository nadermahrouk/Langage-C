#include <stdio.h>

int main( ){
	int a ; 	
	int min  ; 
	int max  ; 
	int i = 1 ; 
	
	printf("saisir un entier  \n ");
	scanf("%d", &min); 
	max = min ; 
	
	do {
		printf("saisir un entier  \n ");
		scanf("%d", &a); 
		if ( max < a  ){
			max = a ; 
		}
		
		if ( min > a and a!= 0 ){
			min = a ; 
		}
			
	}while (a != 0);
	
	printf( "le minimum de ce suite = %d \n", min);
	printf( "le maximum de ce suite = %d ", max);
	return 0;
	
}


