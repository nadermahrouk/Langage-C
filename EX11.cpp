#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
	
	int i[10] = {1,2,3,4,5,0,0,5,0,4} ; 
	
	
	int len = sizeof(i)/sizeof(i[0]);
	
	
	printf("len = %d \n " , len );
	for ( int a= 0 ; a<len ; a++){
		if (i[a] == 0 ){
			printf("indice de  = %d \n " , a );
		}
	}
}
