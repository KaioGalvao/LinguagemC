/*              IF - ELSE
Ler 3 n�meros inteiros e exibir os n�meros que s�o divisiveis por 2 e 3.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"");
	int numero1=0, numero2 = 0, numero3 = 0;
	
	printf("Entre com tr�s n�meros:\n");
	scanf("%i %i %i", &numero1, &numero2, &numero3 );
	
	if(numero1%2 == 0 && numero1%3 == 0){
		printf("\n%i � divis�vel por 2 e 3.",numero1);
		if(numero2%2 == 0 && numero2%3 == 0){
			printf("\n%i � divis�vel por 2 e 3.",numero2);
			if(numero3%2 == 0 && numero3%3 == 0){
				printf("\n%i � divis�vel por 2 e 3.",numero3);
			}
		}
	}
	else{
		if(numero2%2 == 0 && numero2%3 == 0){
			printf("\n%i � divis�vel por 2 e 3.",numero2);
			if(numero3%2 == 0 && numero3%3 == 0){
				printf("\n%i � divis�vel por 2 e 3.",numero3);
			}
		}
		else{
			if(numero3%2 == 0 && numero3%3 == 0){
				printf("\n%i � divis�vel por 2 e 3.",numero3);	
			}
			else
			printf("Nenhum n�mero � divis�vel por 2 e 3");
		}
	}
		
	return 0;
}
