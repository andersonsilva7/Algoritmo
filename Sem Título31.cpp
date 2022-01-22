#include <stdio.h>
#include <locale.h>

//função
int maior(int n1, int n2){
	if(n1>n2){
		return n1;
	}
	else if(n2>n1){
		return n2;
	}
	else{
		return 0;
	}
}

int main(){ // função principal
	setlocale(LC_ALL,"Portuguese"); // utf-8
	int x1,x2;
	puts("Informe o primeiro valor:");
	scanf("%d",&x1);
	puts("Informe o primeiro valor:");
	scanf("%d",&x2);	
	printf("O maior valor é: %d",maior(x1,x2));
	//return 0;
}
