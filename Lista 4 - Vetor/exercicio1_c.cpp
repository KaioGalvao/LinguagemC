#include <stdio.h>
#include <conio.h>
#include <locale.h>


/*
* Suponha que um simples v�rus tenha infectado o sistema de banco de dados da universidade e que, 
* como �nico estrago, ele tenha alterado os RA's dos alunos. Ap�s algum tempo, descobriu-se que 
* dado o RA gerado pelo v�rus RAV = x1 x2 x3 x4 x5 x6 x7 x8 x9, o RA correto 
* RAC = y1 y2 y3 y4 y5 y6 y7 y8 y9 poderia ser obtido atrav�s das seguintes opera��es:
* y1 = x1, y2 = x2, y3 = x8, y4 = x7, y5 = x5, y6 = x6, y7 = x3, y8 = x4, y9 = x9
* Exemplificando, se RAV=197845602 ent�o RAC=190645782.
* Elabore um programa em C que leia RAV e gere RAC com 9 d�gitos
*/


int main()
{	
	setlocale(LC_ALL,"");
	int rac[9], rav[9];
	
	printf("Digite os numeros do RA:\n");
	
	for(int i = 0; i < 9; ++i){
		scanf("%d",&rav[i]);
	}
	
	rac[0] = rav[0];
    rac[1] = rav[1];
    rac[2] = rav[7];
    rac[3] = rav[6];
    rac[4] = rav[4];
    rac[5] = rav[5];
    rac[6] = rav[2];
    rac[7] = rav[3];
    rac[8] = rav[8];
    
    printf("O n�mero correto do RA �:");
    
    for(int i = 0; i < 9; i++){
    	printf("%d",rac[i]);
	}
	
	return 0;
}
