#include <stdio.h>
#include <conio.h>

/*
Ler uma matriz A do tipo vetor com 6 elementos. Criar uma matriz B de mesmo tipo, 
sendo que cada elemento da matriz B seja o fatorial do elemento correspondente da matriz A. Exibir a matriz B.
*/

int main()
{
	int matrizA[6], matrizB[6];
	
	printf("Entre com 6 numeros para a primeira matriz:\n");
	
	for(int i = 0; i < 6; i++){
		scanf("%d",&matrizA[i]);
	}
	
	for(int i=0; i < 6; i++)
	{
		for(matrizB[i]=matrizA[i]; matrizA[i]>1; matrizA[i]--)
		{
            matrizB[i] *= (matrizA[i]-1);
        }     
    }
    
    printf("o valor da segunda matriz eh:\n");
	
	for(int i = 0; i < 6; i++){
		printf("%d\n",matrizB[i]);
	}
	
	return 0;
}
