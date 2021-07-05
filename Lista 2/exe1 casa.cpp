/*         IF - ELSE 
 Elaborar um programa em que informe se o número digitado pelo usuário é par ou impar.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int numero = 0;
	
	printf("Entre com um número:\n");
	scanf("%i", &numero);

	if(numero%2 == 0){
		printf("PAR");
	} else
	printf("IMPAR");

	return 0;
}
