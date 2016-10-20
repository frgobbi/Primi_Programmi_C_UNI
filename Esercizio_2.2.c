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
    int numero, massimo;
    massimo = 0;
    printf("Massimo tra i numeri\n\n");
    do {
        printf("(Per interrompere il programma inserire -1)\n");
        printf("Inserire numero da confrontare: ");
        scanf("%d", &numero);

        if (numero != -1) {
            if (numero > massimo) {
                massimo = numero;
                printf("il nuovo massimo e': %d\n", massimo);
            } else {
                printf("IL numero %d non e' maggiore di %d\n", numero, massimo);
            }

        } else {
            printf("Il programma è stato terminato\n");
        }


    } while (numero != -1);

    printf("Il numero maggiore e': %d\n", massimo);

}