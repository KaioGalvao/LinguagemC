/*                      IF - ELSE
Ler 3 valores (A, B e C) e exibir os valores dispostos em ordem crescente.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	float a = 0, b = 0, c = 0;
	
	printf("Entre com três valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a==b && b==c){
		system("cls");
		printf("Valores iguais\n%.1f %.1f %.1f", a, b, c);
	}
	else{
		if(a<b && b<c){
			system("cls");
			printf("%.1f %.1f %.1f",a,b,c);
		}
		else{
			if(a<c && c<b){
				system("cls");
				printf("%.1f %.1f %.1f",a,c,b);
			}
			else{
				if(b<a && a<c){
					system("cls");
					printf("%.1f %.1f %.1f",b,a,c);
				}else{
					if(b<c && c<a){
						system("cls");
						printf("%.1f %.1f %.1f",b,c,a);
					}
					else{
						if(c<a && a<b){
							system("cls");
							printf("%.1f %.1f %.1f",c,a,b);
						}
						else{
				    		system("cls");
							printf("%.1f %.1f %.1f",c,b,a);
						}
					}
				}
			}
		}
	}
	
	return 0;
}
