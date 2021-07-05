/*       IF - ELSE
Ler três valores para os lados de um triangulo, considerando lados como: A, B e C. 
Verificar se os lados fornecidos formam realmente um triangulo, e se essa condição for verdadeira, 
indicar qual o tipo do triangulo formado: isósceles, escaleno ou eqüilátero.
Triangulo é uma forma geométrica (polígono) composta de 3 lados, onde cada lado é menor que a soma dos dois outros lados. 
REGRA BÁSICA: Será um triangulo quando A<B+C, quando B<A+C e quando C<A+B.
Um triangulo é isosceles quando possui 2 lados iguais e um diferente, sendo A==B ou A==C ou B==C; 
é escaleno quando possui todos os lados diferentes, sendo A<>B e B<>C e é equilatero quando possui 
todos os lados iguais, sendo A==B e B==C.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	int a = 0, b = 0, c = 0;
	
	printf("Entre com três valores para o triângulo:\n");
	scanf("%i %i %i", &a, &b, &c);
	
	if((a < b+c) && (b < a+c) && (c < a+b)){
		if(a==b && b == c){
			system("cls");
			printf("MEDIDAS FORMAM TRIÂNGULO EQUILATERO");
		}
		else{
			if(a!=b && b!=c && a!=c){
				system("cls");
				printf("MEDIDAS FORMAM TRIÂNGULO ESCALENO");
			}
			else{
				system("cls");
				printf("MEDIDAS FORMAM TRIÂNGULO ISOSCELES");
			}
		}	
	}
	else{
		system("cls");
		printf("NÃO FORMA TRIÂNGULO");
	}
	
	return 0;
}
