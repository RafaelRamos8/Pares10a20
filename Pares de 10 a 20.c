#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal
void main(){
	setlocale(LC_ALL,"");
	
	/*Crie um algoritmo que imprima os n�mero de 10 � 20 em n�mero pares utilizando while, dowhile e for.*/
	
//Definindo vari�vel
int i = 10;
	
	//While
	printf("\n \nWhile: \n");
	while(i <= 20){
		printf("\n%d", i);
		i = i + 2;	
	}
	
	//DoWhile
	printf("\n \nDoWhile: \n");
	i = 10;
	do{
		printf("\n%d", i);
		i = i + 2;
	}while(i <= 20);
	
	//FOR
	printf("\n \nFOR: \n");
	for(i = 10; i <= 20; i = i + 2){
		printf("\n%d", i);
	}
	printf("\n \n");
	system("pause");
}
