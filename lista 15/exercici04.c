#include <stdio.h>
#include <conio.h>
//4 - Escreva um algoritmo que leia 2 n�meros, ap�s a leitura somar e exibir o resultado.

void main(){
	int num, num2, soma
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	soma = num + num2;
	printf("Soma: %d", soma);
}
