/*1)	Faça um algoritmo que receba o salário de um funcionário, 
calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 15.3%.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){           
        float salario, aumento ;
		printf("Informe o salário atual :\n");
		scanf("%f",&salario);
        aumento = (salario*15.3) / 100;
		printf ("O novo valor do salário é:R$%.2f",salario + aumento);
		system("pause");
}
