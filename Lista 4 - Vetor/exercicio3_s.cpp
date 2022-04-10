#include <stdio.h>
#include <conio.h>

/*
Ler duas matrizes A e B do tipo vetor com 5 elementos cada. 
Criar uma matriz C, onde cada elemento de A é a subtração do 
elemento correspondente de A com B. Exibir a matriz C.
*/


int main()
{	
	float  matrizA[5], matrizB[5], matrizC[5];
	
	printf("Entre com 5 numeros para a primeira matriz:\n");
	
	for(int i = 0; i < 5; i++){
		scanf("%f",&matrizA[i]);
	}
	printf("Entre com 5 numeros para a segunda matriz:\n");
	
	for(int i = 0; i < 5; i++){
		scanf("%f",&matrizB[i]);
	}
	
	
	for(int i = 0; i < 6; i++){
		matrizC[i] = matrizA[i] - matrizB[i];
	}
	
	printf("o valor da terceira matriz eh:\n");
	
	for(int i = 0; i < 5; i++){
		printf("%.1f\n",matrizC[i]);
	}

	return 0;
}
