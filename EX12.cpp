#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// procedure et fonction 

void affiche_matrice ( int tab[5][5]){
	
	for ( int i = 0 ; i < 5 ; i++ ){
		for ( int j = 0 ; j < 5 ; j++ ){
			printf(" %d ",tab[i][j]);
		}
		printf("\n");	
	}
	
}


int main( ){
	
	int mat[5][5]; 
	
	for ( int i = 0 ; i < 5 ; i++ ){
		for ( int j = 0 ; j < 5 ; j++ ){
				
			mat[i][j]=rand();
		}	
	}
	affiche_matrice(mat);	
	
}
