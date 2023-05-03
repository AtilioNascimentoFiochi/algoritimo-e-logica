#include <stdio.h>
#include <conio.h>
//6 - Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro do segundo e divida o resultado pelo terceiro.

void main(){
	float n1, n2, n3, result;
	 
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe outro numero: ");
	scanf("%d", &n2);
	printf("Informe outro numero: ");
	scanf("%d", &n3);
	result = (float) (n2 - n1) / (float)n3;
	printf("Resultado: %f", result);
	
}
