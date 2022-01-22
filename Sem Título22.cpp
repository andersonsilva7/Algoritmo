#include <stdio.h>
#include <stdlib.h>
main(){
int x;
	printf("Informe um valor:\n");
	scanf("%f", &x);
    if ((x*x) + (-10*x) + 24 == 0) {
		printf("Verdadeiro");
	}
	else{
		printf("Falso");
	}
	system("pause");
}

