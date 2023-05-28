/*
Autor:Lucas Neves 
Data: 27/05/2023
*/

#include <stdio.h>

int main() {
    int numeros[20];
    int i, maior, menor;

    // Preenchendo o vetor com 20 números inteiros
    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializando as variáveis maior e menor com o primeiro elemento do vetor
    maior = menor = numeros[0];

    // Encontrando o maior e o menor número
    for (i = 1; i < 20; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Imprimindo o vetor preenchido
    printf("\nVetor preenchido:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }

    // Imprimindo o maior e o menor número
    printf("\n\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}
