/*1)	Fa�a um algoritmo que receba o sal�rio de um funcion�rio, 
calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 15.3%.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){           
        float salario, aumento ;
		printf("Informe o sal�rio atual :\n");
		scanf("%f",&salario);
        aumento = (salario*15.3) / 100;
		printf ("O novo valor do sal�rio �:R$%.2f",salario + aumento);
		system("pause");
}
