/*       IF - ELSE
Ler tr�s valores para os lados de um triangulo, considerando lados como: A, B e C. 
Verificar se os lados fornecidos formam realmente um triangulo, e se essa condi��o for verdadeira, 
indicar qual o tipo do triangulo formado: is�sceles, escaleno ou eq�il�tero.
Triangulo � uma forma geom�trica (pol�gono) composta de 3 lados, onde cada lado � menor que a soma dos dois outros lados. 
REGRA B�SICA: Ser� um triangulo quando A<B+C, quando B<A+C e quando C<A+B.
Um triangulo � isosceles quando possui 2 lados iguais e um diferente, sendo A==B ou A==C ou B==C; 
� escaleno quando possui todos os lados diferentes, sendo A<>B e B<>C e � equilatero quando possui 
todos os lados iguais, sendo A==B e B==C.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	int a = 0, b = 0, c = 0;
	
	printf("Entre com tr�s valores para o tri�ngulo:\n");
	scanf("%i %i %i", &a, &b, &c);
	
	if((a < b+c) && (b < a+c) && (c < a+b)){
		if(a==b && b == c){
			system("cls");
			printf("MEDIDAS FORMAM TRI�NGULO EQUILATERO");
		}
		else{
			if(a!=b && b!=c && a!=c){
				system("cls");
				printf("MEDIDAS FORMAM TRI�NGULO ESCALENO");
			}
			else{
				system("cls");
				printf("MEDIDAS FORMAM TRI�NGULO ISOSCELES");
			}
		}	
	}
	else{
		system("cls");
		printf("N�O FORMA TRI�NGULO");
	}
	
	return 0;
}
