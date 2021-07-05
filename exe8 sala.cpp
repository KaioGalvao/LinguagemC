/*              IF - ELSE
Ler 3 números inteiros e exibir os números que são divisiveis por 2 e 3.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"");
	int numero1=0, numero2 = 0, numero3 = 0;
	
	printf("Entre com três números:\n");
	scanf("%i %i %i", &numero1, &numero2, &numero3 );
	
	if(numero1%2 == 0 && numero1%3 == 0){
		printf("\n%i é divisível por 2 e 3.",numero1);
		if(numero2%2 == 0 && numero2%3 == 0){
			printf("\n%i é divisível por 2 e 3.",numero2);
			if(numero3%2 == 0 && numero3%3 == 0){
				printf("\n%i é divisível por 2 e 3.",numero3);
			}
		}
	}
	else{
		if(numero2%2 == 0 && numero2%3 == 0){
			printf("\n%i é divisível por 2 e 3.",numero2);
			if(numero3%2 == 0 && numero3%3 == 0){
				printf("\n%i é divisível por 2 e 3.",numero3);
			}
		}
		else{
			if(numero3%2 == 0 && numero3%3 == 0){
				printf("\n%i é divisível por 2 e 3.",numero3);	
			}
			else
			printf("Nenhum número é divisível por 2 e 3");
		}
	}
		
	return 0;
}
