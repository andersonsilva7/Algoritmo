/*3)	Fa�a um algoritmo que calcule uma equa��o do segundo grau, dada a f�rmula:
      (N�mero informado pelo usu�rio)

x� � 10x + 24 = 0

Verifique se o n�mero informado satisfaz a equa��o. Se sim imprimir verdadeiro, se n�o falso.
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

