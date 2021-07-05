/*                      IF - ELSE 
Ler dois valores numéricos e exibir a diferença do maior para o menor.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	double valor1 = 0, valor2 = 0;
	
	printf("Entre com dois valores:\n");
	scanf("%i %i", &valor1, &valor2);
	
	if(valor1 == valor2){
		system("cls");
		printf("Resultado de %i - %i = 0 ",valor1, valor2);
	} 
	else{
		if(valor1 > valor2){
			system("cls");
			printf("Resultado de %i - %i = %i ",valor1, valor2, (valor1 - valor2));
		}
		else{
			system("cls");
			printf("Resultado de %i - %i = %i ",valor2, valor1, (valor2 - valor1));
		}	
	}
	
	return 0;
}
