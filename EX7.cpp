#include<stdio.h>

int main (){
	
	int a ; 
	int b ; 
	
	printf("saisir un entier a  \n "); 
	scanf("%d" , &a );
	
	printf("saisir un entier b  \n "); 
	scanf("%d" , &b  );
	
	int q  = 0 ; 
	int res = 0 ; 

	while(a >= b){
		if (b == a ){
			res = 0 ; 
		}else {
			res =  a - b ; 
		}
		a = a - b ;
		q++ ; 
		
	}
	
	printf(" quotient  =  % d   \n " , q ); 
	printf(" res  =  % d   \n " , res  ); 
	
}


