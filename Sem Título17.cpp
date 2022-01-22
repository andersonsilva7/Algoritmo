/*2)	Faça um algoritmo que calcule o IMC dados a altura e o peso da pessoa.
 A fórmula para cálculo é:
Peso/Altura*Altura
Logo após o cálculo imprimir o resultado e a situação da pessoa de acordo com a tabela abaixo.
Menor que 18,5	Abaixo do peso
Entre 18,5 e 24,99	Peso normal
Maior que 24,99	Acima do peso
 IMC = peso/(altura*altura)
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
      float peso, altura, IMC;
        printf("Informe o peso:\n");
		scanf("%f",&peso);
        printf("Informe a altura :\n");
		scanf("%f",&altura);
        IMC = peso/(altura*altura);
        
       	
       	if(IMC<18.5){
          printf("Seu IMC e %.2f  voce esta  abaixo do peso",IMC);
          }  
        else if(IMC>=18.5 && IMC<25) {
             printf("Seu IMC e %.2f voce esta com o peso normal",IMC);
       }
       else
       {
             printf("Seu IMC e %.2f voce esta acima do peso",IMC);
       }
		system("pause");      
		
    }
