#include<stdio.h>

int main (){
	int a ; 
	while (true){
	
	printf("saisir un entier n  \n "); 
	scanf("%d" , &a );
	printf( "diviseur :  ");
	
	for ( int i = 1; i < a/2 + 1 ; i++){
		
		if (a % i == 0 ){
			printf( " , %d  " , i );
		}
	}
	
	printf("  \n "); 
	}
	
	
}


