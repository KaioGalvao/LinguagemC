/*         IF - ELSE 
Ler 3 valores referentes a 3 notas de um aluno
e exibir uma mensagem dizendo que ele foi aprovado, 
se o valor da m�dia for maior ou igual a 6.0. 
Se o aluno n�o foi aprovado, exibir mensagem informando essa condi��o. 
Exibir junto com uma das mensagens, o valor da m�dia para qualquer condi��o.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, media = 0.0;
	
	printf("Entre com tr�s notas:\n");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	system("cls");
	
	if(media >= 6){
		printf("APROVADO!!!\nSUA NOTA � %.2f",media);
	} else
	printf("Reprovado");

	return 0;
}
