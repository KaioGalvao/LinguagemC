/*				IF - ELSE
Ler 3 valores (A, B e C) e calcular a equa��o de segundo grau, 
exibindo as duas raizes, se para os valores informados for
possivel efetuar o referido c�lculo.
*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"");
	int a = 0.0, b = 0.0, c= 0.0, delta = 0.0;
	
	printf("Entre com tr�s valores:\n");
	scanf("%i %i %i", &a, &b, &c);
	
	system("cls");
	
	if(a < 1){
		printf("N�o � uma equa��o de segundo grau.");
	} else{
		delta = sqrt(b*b-4*a*c);
		if(delta>=0){
			int x = (-b+delta)/2*a;
			int x2 = (-b-delta)/2*a; 
			printf("O valor do a=%i b=%i c=%i \n", a, b, c);
			printf("O valor do x' � %i e o x'' � %i ",x,x2);
		}else
		printf("N�o possui ra�zes reais.");	
	}
	
	return 0;
}
