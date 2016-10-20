/*
	Name: Francesco Gobbi
	Copyright:
	Author:
	Date: 20/10/16 10:43
	Description:
*/

/*Esercizio 1 Scrivere una funzione C che riceve come parametro un array di int e la sua lunghezza e restituisce 1 se la sequenza di interi memorizzata nell’array è palindroma,
 0 se non lo è. Una sequenza è palindroma se è uguale a se stessa letta al contrario. Ad esempio se l’array contenesse i valori 5 23 76 2 76 23 5, la funzione dovrebbe restituire 1,
  se invece l’array contenesse i valori 4 6 2 87 9 4, la funzione dovrebbe restituire 0. Scrivere poi un programma che legge una sequenza di interi dall’utente e dice all’utente se
  la sequenza è palindroma o meno.*/
#include <stdio.h>
#include <stdlib.h>
int palindromo (int vet[], int lunghezza);
int main(){
	int n,i;
	printf("Inserire lunghezza del vettore: ");
	scanf("%d",&n);

	int vet[n];
	for(i =0; i<n; i++){
		printf("\nInserire valore: ");
		scanf("%d",&vet[i]);
	}

	int esito = palindromo(vet, n);
	printf("Esito e': %d\n",esito);
}

int palindromo(int vet[], int lunghezza){
	int esito = 1;
	int i;
	for(i =0; i<lunghezza; i++){
		if(vet[i]!=vet[lunghezza-1-i]){
			esito = 0;
		}
	}
	return esito;
}
