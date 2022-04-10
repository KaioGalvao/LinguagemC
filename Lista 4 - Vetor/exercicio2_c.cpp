#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*

Descreva um programa em Linguagem C que leia o valor de um RA (número composto por 9 dígitos) 
e gere um novo RA pela inversão dos 4 dígitos menos significativos do RA inicial.
Exemplificando, se RA inicial for 972845236 então o RA novo deve ser 972846325.
Se RA inicial for 984475211 então o RA novo deve ser 984471125.
O algoritmo deve ler RA inicial e apresentar o RA novo.

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
	
	for(int i = 5, j = 8; i < 9; i++, j--){
		novo_Ra[i] = ra[j];
	}
	
	printf("RA antigo  eh:\n");
	
	for(int i = 0; i < 9; i++){
		printf("%d",ra[i]);
	}
	
	
	printf("\nO valor do novo RA eh:\n");
	
	for(int i = 0; i < 9; i++){
		printf("%d",novo_Ra[i]);
	}
	
	return 0;
}
