/*              Switch - Case
Fa�a um algoritmo que receba como entrada o m�s (de 1 a 12) 
e retorne o nome do respectivo m�s. (Utilizar caso/seja)
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"");
	int mes=0;
	
	printf("Entre com n�mero do m�s:\n");
	scanf("%i", &mes);
	
	switch(mes){
		case 1 :
			printf("Janeiro");
		break;
		
		case 2 :
			printf("Fevereiro");
		break;
		
		case 3 :
			printf("Mar�o");
		break;
		
		case 4 :
			printf("Abril");
		break;
		
		case 5 :
			printf("Maio");
		break;
		
		case 6 :
			printf("Junho");
		break;
		
		case 7 :
			printf("Julho");
		break;
		
		case 8 :
			printf("Agosto");
		break;
		
		case 9 :
			printf("Setembro");
		break;
		
		case 10 :
			printf("Outubro");
		break;
		
		case 11 :
			printf("Novembro");
		break;
		
		case 12 :
			printf("Dezembro");
		break;
		
		default :
		printf("N�o t�m mes %i", mes);
	}
		
	return 0;
}
