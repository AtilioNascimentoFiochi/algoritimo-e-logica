#include <stdio.h>
#include <conio.h>
//8 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.

void main(){
	float nota1, nota2, nota3, media;
	
	printf("Informe sua nota: ");
	scanf("%f", &nota1);
	printf("Informe sua nota: ");
	scanf("%f", &nota2);
	printf("Informe sua nota: ");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("Sua media final eh: %f", media);
}
