#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int numeroS; //Numero scelto
	int c = 1; //contatore
	int n; //numero utente


	srand(time(NULL));
	numeroS = rand()%1000+1;
	
	
		printf("(con 0 finisce il gioco)\n");
		printf("Ho pensato un numero tra 1 e 1000.\n");
	do{
		printf("Indovina che numero ho pensato: \n");
		scanf("%d",&n);
		
		if(n == numeroS){
			printf("Bravo! Hai indovinato in %d tentativi.",c);
			break;
		} else{
			if(n ==0){
			printf("ti sei arreso dopo %d tentativi, il numero scelto era: %d",c,numeroS);
			
			}else{
				c ++;
				if(n>numeroS){
					printf("%d e' troppo alto, prova ancora.",n);
				} else{
					printf("%d e' troppo basso, prova ancora.",n);
				}
			}	
		}
	} while((n!=0) && (n!=numeroS));
}
