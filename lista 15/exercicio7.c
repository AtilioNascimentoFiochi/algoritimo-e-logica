#include <stdio.h>
#include <conio.h>
//7 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, ao final exiba a idade que essa pessoa tem.

void main(){
	int an, at, idade;
	
	printf("Informe seu ano de nascimento: ");
	scanf("%d", &an);
	printf("Informe o ano atual: ");
	scanf("%d", &at);
	idade = at - an;
	printf("Sua idade eh: %d", idade);
	
	
	
	
	
}
