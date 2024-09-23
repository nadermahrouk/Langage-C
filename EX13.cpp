#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int heure   ; 
int minute  ; 
int seconde ; 


void affiche_heure (int heure , int minute , int seconde ){
	printf(" Il  esr  %d heure(s)  %d  minute(s)  %d seconde(s) \n )", heure , minute , seconde);
}


void saisir_heure ( int h , int m , int s){
	heure   = h ; 
	minute  = m ; 
	seconde = s ;	
}

void tick (){
	if ( seconde == 60 ){
		seconde = 0 ; 
		if (minute == 60){
			minute = 0 ;
			if ( heure == 24){
				heure = 0 ; 
				seconde ++ ;
			}else {
				heure ++ ; 
			}
		}else {
			minute ++ ; 
		}
	}
	else {
		seconde ++ ;
	}
}

int main(){
	affiche_heure(heure,minute,seconde);
	saisir_heure(12,13,59);
	affiche_heure(heure,minute,seconde);
	tick(); 
	affiche_heure(heure,minute,seconde);
	saisir_heure(24,60,60);
	affiche_heure(heure,minute,seconde);
	tick(); 
	affiche_heure(heure,minute,seconde);	
}
