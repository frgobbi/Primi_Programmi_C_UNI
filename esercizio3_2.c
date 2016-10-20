#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Convertitore(int vet[], int base, int numero, int lunghezza);
int main(){
int n,b,lunghezza,i;
do{
	printf("(compreso tra 2 e 9)\n ");
	printf("Inserisci la base per convertire: ");
	scanf("%d",&b);
}while((b<2 )|| ( n >9))

do{
	printf("(Maggiore di 0)\n ");
	printf("\n Inserisci il numero da convertire: ");
scanf("%d",&n);
}while((n<0)


lunghezza = floor(log(n)/log(b))+1;

int vet[lunghezza];
Convertitore(vet,b,n,lunghezza);

for(i=0;i<lunghezza;i++){
	printf("%d\t",vet[i]);
}
	
}


void Convertitore(int vet[], int base, int numero, int lunghezza){
	
	int resto,i;
	for(i=(lunghezza-1);i>=0;i--){
		resto = numero%base;
		vet[i]=resto;
		numero = numero/base;
	}	
}

