/*3)	Faça um algoritmo que calcule uma equação do segundo grau, dada a fórmula:
      (Número informado pelo usuário)

x² – 10x + 24 = 0

Verifique se o número informado satisfaz a equação. Se sim imprimir verdadeiro, se não falso.
*/
#include <stdio.h>
#include <stdlib.h>
main(){
int x;
	printf("Informe um valor:\n");
	scanf("%d", &x);
    if ((x*x) + (-10*x) + 24 == 0) {
		printf("Verdadeiro");
	}
	else{
		printf("Falso");
	}
	system("pause");
}

