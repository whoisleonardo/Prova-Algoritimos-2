#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
	
	int idade, rep;
	float altura, peso, imc;
	
	printf("\nInforme sua idade: ");
	scanf("%d", &idade);
	printf("\nInforme sua altura: ");
	scanf("%f", &altura);
	printf("\nInforme seu peso: ");
	scanf("%f", &peso);
	
	imc=peso/pow(altura, 2);
	
	if(imc <= 18){
	rep=3;
	}
	else if(imc >18 && imc <25){
	rep=6;
	}
	else if(imc >25 && imc <32){
	rep=9;
	}
 	else if(imc >32 && imc <60){
	rep=12;
	}
	
	printf("\nSeu IMC é: %.4f", imc);
	
	if(idade < 20){
		printf("\nExercício recomendado: Tiro de 100m com %i repetições", rep);
	}
	if(idade > 20 && idade < 40){
		printf("\nExercício recomendado: Bicicleta com %i repetições", rep);
	}
	if(idade > 40 && idade < 60){
		printf("\nExercício recomendado: Esteira com %i repetições", rep);
	}
	if(idade > 60){
		printf("\nExercício recomendado: Musculação tipo A com %i repetições", rep);
	}
	
}
