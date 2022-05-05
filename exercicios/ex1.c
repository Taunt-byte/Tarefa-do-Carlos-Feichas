/*
Faca um programa que preencha um vetor com 20 numeros inteiros e gere
como solucao:
a) O vetor preenchido
b) O maior numero
c) O menor numero
*/

#include<stdio.h>
#include<conio.h>

int main(void){
	int i,vetor[20];
	
	// Entrada de dados
	printf("Digite 20 numeros inteiros");
	scanf("%i",&vetor[0]);
	
	// Exibindo os valores do vetor
	for (i= 0; i<=20; i++){
		printf("Vetor[%d] = %d\n",i,vetor[i]);
	}
	//O maior numero
	printf("O maior numero");
	//O menor numero
	printf("O menor numero");
  
  getch();
  return 0;
}
