/*              IF - ELSE
Ler um valor inteiro positivo ou negativo e exibir o n�mero lido 
como sendo um valor positivo, ou seja, o programa devera exibir o modulo 
de um n�mero fornecido. Lembre-se de verificar se o n�mero fornecido � 
menor que zero; sendo, multiplique-o por -1.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"");
	int numero = 0;
	
	printf("\tMODULO\nEntre com um n�mero:\n");
	scanf("%i", &numero);
	
	if(numero < 0){
		printf("\n%i",(numero*(-1)));
	} 
	else{		
		printf("\n%i",numero);	
	}
	
	return 0;
}
