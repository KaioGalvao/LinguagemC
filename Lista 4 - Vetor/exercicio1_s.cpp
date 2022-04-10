#include <stdio.h>
#include <conio.h>


/*

Ler 5 elementos em uma matriz A tipo vetor. Criar uma matriz B de mesma dimensão 
com os elementos da matriz A multiplicados por 3. Exibir a matriz B. 
O elemento B[1] deverá ser implicado pelo elemento A [1] * 3, 
o elemento B[2] pelo elemento A [2] * 3 e assim por diante, até 5.

*/


int main(){
	
	int matrizA[5], matrizB[5];
	
	printf("Entre com 5 numeros para a primeira matriz:\n");
	
	for(int i = 0; i < 5; i++){
		scanf("%d",&matrizA[i]);
	}
	
	for(int i = 0; i < 5; i++){
		matrizB[i] = matrizA[i] * 3;
	}
	
	printf("Os valores da segunda matriz são:\n ");
	for(int i = 0; i < 5; i++){
		printf("%d\n",matrizB[i]);
	}
	return 0;
}
