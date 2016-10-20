/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: francesco
 *
 * Created on 13 ottobre 2016, 18.04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main() {
int numero, somma;
somma = 0;
printf("PROGRAMMA SOMMA NUMERI\n\n");
do{

    printf("(Per interrompere summa inserire -1)\n");
    printf("Inserire numero da sommare: ");
    scanf("%d",&numero);

    if(numero != -1){
        somma += numero;
        printf("La somma attuale e': %d\n",somma);
    } else{
        printf("La somma e' stata terminata\n");
    }

} while (numero != -1);

printf("Il risultato finale e': %d\n",somma);
}

