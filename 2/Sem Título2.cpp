#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
	
	int senha, ace=2099, qntsenha;
	
		printf("\nInforme a senha: ");
		scanf("%i", &senha);
	
	while(senha != ace){
	    printf("\nACESSO NEGADO");
    	printf("\nInforme a senha novamente: ");
		scanf("%i", &senha);
		qntsenha++;
		
	}if(senha == ace){
		
		system("cls");
		
		printf("\nACESSO PERMITIDO");
		printf("\nQuantidade de vezes que a senha foi informada: %i", qntsenha);
	}
	
}
