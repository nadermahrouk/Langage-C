#include<stdio.h>

int main() {
    int a;
    int b;
    int res = 0;

    printf("Saisir un entier a: \n");
    scanf("%d", &a);

    printf("Saisir un entier b: \n");
    scanf("%d", &b);

    res = 0;

    while (b > 0) {
        if (b % 2 == 1) { 
            b = b - 1 ;
            res = res + a;
        }else {
        	b = b / 2 ;
        	a = a * 2 ;
		}
		
        
    }

    printf("Res = %d\n", res);
    
    return 0;
}

