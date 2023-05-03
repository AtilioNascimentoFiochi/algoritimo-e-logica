#include <stdio.h>
#include <conio.h>
//10 - Elabore um algoritmo que informe o maior número entre dois números conhecido pelo usuário.

void main(){
	int num, num2;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	if (num > num2){
		printf("%d eh maior", num);
	 }
	else{
		if (num == num2){
			printf("Numeros Iguais!");
		                }
		else{
			printf("%d eh maior", num2);
		    }			
        }
}
