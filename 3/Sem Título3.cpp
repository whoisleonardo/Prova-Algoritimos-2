#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
	
	int op, i, qntb;
	float percentb, mid, idade, somaid;
	
	for(i=0;i<15;i++){
	printf("\nQual sua idade? ");
	scanf("%f", &idade);
	printf("\nQual sua opini�o em rela��o ao filme: 3 - �timo, 2 - Bom, 1 - Regular? ");
	scanf("%d", &op);
	
	switch(op){
		case 3:
		somaid+=idade;
		mid=somaid/15;
		break;
		case 2:
		qntb++;
		percentb=(qntb/15)*100;
		break;
	}
	}
		printf("\nA m�dia de idade de pessoas que responderam �tima �: %.2f", mid);
		printf("\nO percentual de pessoas que consideram o filme bom � de: %.2f", percentb);
}
