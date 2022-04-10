#include <stdio.h>
#include <conio.h>


/*

Descreva um programa em C que leia o valor de um RA (número composto por 9 dígitos) e gere 
um novo RA pela inversão dos 2 dígitos mais significativos e pela inversão dos 2 dígitos 
menos significativos do RA inicial. Exemplificando, se RA inicial for 972845236 então o 
RA novo deve ser 792845263. Se RA inicial for 984475213 então o RA novo deve ser 894475231. 
O algoritmo deve ler RA inicial e imprimir o RA novo.

*/


int main()
{
	int ra[9],novo_Ra[9];
	printf("Insira os numeros do RA:\n");
	
	for(int i = 0; i < 9; i++){
		scanf("%d",&ra[i]);
	}
	
	for(int i = 0; i < 9; i++){
		novo_Ra[i] = ra[i];
	}
	
	for(int i = 0, j = 1; i < 2; i++, j--){
		novo_Ra[i] = ra[j];
	}
	
	printf("RA antigo eh:\n");
	
	for(int i = 0; i < 9; i++){
		printf("%d",ra[i]);
	}
	
	
	printf("\nO valor do novo RA eh:\n");
	
	for(int i = 0; i < 9; i++){
		printf("%d",novo_Ra[i]);
	}
	
	return 0;
}
