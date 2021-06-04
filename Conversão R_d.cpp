#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dolar(){
	
	system("cls");
	float  reais;
	printf("Entre com valor em reais:");
	scanf("%f",&reais);
	reais/=2.4;
	printf("R$%.2f = U$%.2f",reais*2.4,reais);
	
}
int reais(){
	system("cls");
	float  reais;
	printf("Entre com valor em dolar:");
	scanf("%f",&reais);
	reais*=2.4;
	printf("U$%.2f = R$%.2f",reais/2.4,reais);
	
}
int main(){
	
	
	setlocale(LC_ALL,"");
	int opcao = 0;
	int i=0;
    do{   
     printf("\tConversor de Dolar\n");

		printf("Escolha opção desejada\n");
		printf("1) Reais para Dolar\n");
		printf("2) Dolar para reais\n");
		printf("3) Encerrar\n:");
		int escolha = 0;
		scanf("%i",&escolha);
		switch(escolha){
			case 1 : dolar();i++;break;
			case 2 : reais();i++;break;
			default : system("cls");
			exit(0);;break;
		}
		
	}while (opcao >3);
	i++;
	return 0;
}



