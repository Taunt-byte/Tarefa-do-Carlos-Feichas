/*
Autor:Lucas Neves 
Data: 27/05/2023
*/

#include <stdio.h>

int main() {
    int numeros[20];
    int ultimos[10];
    int primeiros[10];
    int i;

    // Preenchendo o vetor com 20 números inteiros
    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Copiando os últimos 10 números para o vetor 'ultimos'
    for (i = 0; i < 10; i++) {
        ultimos[i] = numeros[19 - i];
    }

    // Copiando os primeiros 10 números para o vetor 'primeiros'
    for (i = 0; i < 10; i++) {
        primeiros[i] = numeros[i];
    }

    // Imprimindo os três vetores
    printf("\nVetor original:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\nVetor dos últimos 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", ultimos[i]);
    }

    printf("\n\nVetor dos primeiros 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", primeiros[i]);
    }

    return 0;
}
