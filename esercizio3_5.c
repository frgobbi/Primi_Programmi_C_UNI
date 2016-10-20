#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int strike(int vetA[], int vetB[]);
int ball(int vetA[], int vetB[]);
int main(){
	int vetA[4],vetB[4];
	int s, b,i,j, app, controllo;
	srand(time(NULL));
		for(i=0;i<4;i++){
		vetA[i]= 100;	
		}
	
	for(i=0;i<4;i++){
		do{
			b = 1;
			app = rand()%10;
			for(j=0;j<4;j++){
				if(app == vetA[j]){
					b=0;
				}
			}
		} while(b!=1);
		vetB[i]= app;	
	}
	
	do{
		printf("indovina i valori");
		for(i=0;i<4;i++){
		printf("\ncarica valore array da indovinare: ");
		scanf("%d",&vetB[i]);
		}
		
		for(i=0;i<4;i++){
			if(vetB[i]==-1){
				controllo = 1;
			}
		}
	
	s = strike(vetA, vetB);
	b = ball(vetA, vetB);
	
	printf("______________________________________");
	printf("\n strike: %d",s);
	printf("\n ball: %d\n",b);
	} while((s !=4) && (controllo !=1));
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
	int i, c,j;
	c=0;
	for(i=0;i<4;i++){
		int esito = 0;
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
