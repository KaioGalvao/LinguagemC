/*              IF - ELSE
 Ler 3 n�meros inteiros e exibir os n�meros que sao divisiveis por 4 ou 5.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"");
	int numero1=0, numero2 = 0, numero3 = 0;
	
	printf("Entre com tr�s n�meros:\n");
	scanf("%i %i %i", &numero1, &numero2, &numero3 );
	
	if(numero1%4 == 0 && numero1%5 == 0){
		printf("\n%i � divis�vel por 4 e 5.",numero1);
		if(numero2%4 == 0 && numero2%5 == 0){
			printf("\n%i � divis�vel por 4 e 5.",numero2);
			if(numero3%4 == 0 && numero3%5 == 0){
				printf("\n%i � divis�vel por 4 e 5.",numero3);
			}
		}
	}
	else{
		if(numero2%4 == 0 && numero2%5 == 0){
			printf("\n%i � divis�vel por 4 e 5.",numero2);
			if(numero3%4 == 0 && numero3%5 == 0){
				printf("\n%i � divis�vel por 4 e 5.",numero3);
			}
		}
		else{
			if(numero3%4 == 0 && numero3%5 == 0){
				printf("\n%i � divis�vel por 4 e 5.",numero3);	
			}
			else
			printf("Nenhum n�mero � divis�vel por 4 e 5");
		}
	}
		
	return 0;
}
