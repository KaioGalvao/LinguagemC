/*              IF - ELSE 
Ler 2 valores referentes a 2 notas de um aluno e exibir uma mensagem dizendo que o aluno foi aprovado,
se o valor da média for maior ou igual a 6.0. Se o valor da média for menor que 6.0, solicitar a nota de exame, 
somar com o valor da média e obtiver uma nova média. Se a nova média for maior ou igual a 5, 
exibir mensagem dizendo que o aluno foi aprovado em exame. Se o aluno não foi aprovado, exibir uma mensagem informando 
essa condição. Exibir junto com uma das mensagens, o valor da média para qualquer condição.*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	float nota1 = 0.0, nota2 = 0.0, notaExame = 0.0, media = 0.0;
	
	printf("Entre com duas notas:\n");
	scanf("%f %f", &nota1, &nota2);
	
	media = (nota1 + nota2)/2;
	
	if(media >= 6){
		system("cls");
		printf("APROVADO!!!\nSUA NOTA É %.2f",media);
	} 
	
	else{
		printf("Entre com nota do Exame\n");
		scanf("%f", &notaExame);
		
		media = (media + notaExame)/2;
		
		if(media >= 5){
			system("cls");
			printf("APROVADO!!!\nSUA NOTA É %.2f",media);
		}
		else{
			system("cls");
			printf("Reprovado");
		}
	}
	
	return 0;
}
