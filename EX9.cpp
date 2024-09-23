#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
	int i ; 
	int *p ; 
	
	i = rand(); 
	
	p= &i ; 
	
	
	printf(" la valeur i = %d  \n  ", i);
	printf(" la valeur pointe sur i  = %d  \n  ", *p);
	
	
	// modifier p 
	
	*p = 20  ; 
	printf(" la valeur i  aprs modifier p = %d  \n  ", i);
	
	
	
	
}
