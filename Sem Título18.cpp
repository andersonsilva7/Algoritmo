/*3)	Faça um algoritmo que calcule uma equação do segundo grau, dada a fórmula:
      (Número informado pelo usuário)

x² – 10x + 24 = 0

Verifique se o número informado satisfaz a equação. Se sim imprimir verdadeiro, se não falso.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
float  a, b, c, d, x, x1, x2;
printf("Informe a");
scanf ("%f", &a);
printf("Informe b");
scanf ("%f", &b);
printf("Informe c");
scanf ("%f", &c);
d = (b*b)-4*(a*c);
printf("Delta e =%.2f",d);
x1=((-b)+sqrt(d))/2*a;
printf("\nx1 e =%.2f",x1);
x2=((-b)-sqrt(d))/2*a;
printf("\nx2 e =%.2f",x2);

printf("\nInforme um numero:\n");
	scanf("%f", &x);
    if ((x*x) + (-10*x) + 24 == 0) {
		printf("Verdadeiro");
	}
	else{
		printf("Falso");
	}
	system("pause");
}


