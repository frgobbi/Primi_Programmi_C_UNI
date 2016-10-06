#include <stdio.h>


int main(){
	int numero, i, n,j;
	int vet[100];
	printf("inserire un numero intero: ");
	scanf("%d",&numero);
	n= numero;

	i = 0;
	do{
		if((numero%2)==0){
			vet[i] = 0;
			//printf("0");
		} else {
			vet[i] = 1;
			//printf("1");
		}
		numero = numero /2;
		i++;
	}
	while(numero > 1);

	if(numero ==1){
		vet[i] = 1;
	} else {
		vet[i] = 1;
	}

	printf("il numero %d in binario e': ",n);
	for (j=i;j>=0;j--){
		printf("%d",vet[j]);
	}
	printf("\n")
}