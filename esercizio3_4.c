#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int strike(int vetA[], int vetB[]);
int ball(int vetA[], int vetB[]);
int main(){
	int vetA[4],vetB[4];
	int s, b,i,j, app;
	srand(time(NULL));
		for(i=0;i<4;i++){
		vetA[i]= 100;	
		}
		
	printf("___________________________________________________________________\n");
	printf("|                   INDOVINA I NUMERI!!!!! :)                     |\n");	
	printf("|_________________________________________________________________|\n");
	//Ciclo che inserisce i valori
	for(i=0;i<4;i++){
		//ciclo che vincola i valori diversi
		do{
			b = 1;
			app = rand()%10;
			//ciclo che controlla se il valore random è contenuto nell'array
			for(j=0;j<4;j++){
				if(app == vetA[j]){
					b=0;
				}
			}
		} while(b!=1);
		vetA[i]= app;	
	}
	
	/*for(j=0;j<4;j++){
		printf("%d",vetA[j]);
	}*/
	
	do{
		printf("indovina i valori");
		for(i=0;i<4;i++){
		printf("\ncarica valore array da indovinare: ");
		scanf("%d",&vetB[i]);
		}
	
	s = strike(vetA, vetB);
	b = ball(vetA, vetB);
	
	printf("______________________________________");
	printf("\n strike: %d",s);
	printf("\n ball: %d\n",b);
	} while(s !=4);
}


int strike(int vetA[], int vetB[]){
	int i, c;
	c=0;
	for(i=0;i<4;i++){
		if(vetA[i]==vetB[i]){
			c ++;
		}
	}
	return c;
}

int ball(int vetA[], int vetB[]){
	int i, c,j,esito;
	c=0;
	for(i=0;i<4;i++){
		esito = 0;
		for(j=0;j<4;j++){
			if(i!=j){
				if(vetA[i]==vetB[j]){
					esito = 1;
				}
			}
		}
		if(esito == 1){
			c++;
		}
	}
	return c;
}
