#include <stdio.h>
#include <stdlib.h>

void saisir (int *tab , int taill){
	int n ; 
	for ( int i = 0 ; i < taill ; i++){
		printf("saisir element %d \n " , i );
		scanf ("%d" ,&n );
		tab[i ] = n ; 	
	}
}

void tirer(int *tab , int taill){
	int min  = 0  ; 
	for ( int i = 0 ; i < taill ; i++){
		for (int j = i ; j<taill ; j++){
			if ( tab[j] < tab [i]){
				min = tab[i]   ;
				tab[i] = tab[j]; 
				tab[j]=min ;
					
			}	
		}
	}
}

int main (){
	
	int taille  ;
	
	printf("saisir la taille de tableau " );
	scanf ("%d" ,&taille );
	
	int *tab = (int*) malloc( taille * sizeof(int));
	
	saisir (tab , taille) ; 
	
	
	// Afficher les éléments du tableau
    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    tirer(tab , taille) ; 
    
    // Afficher les éléments du tableau
    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    free(tab);
    return 0;
    
}
