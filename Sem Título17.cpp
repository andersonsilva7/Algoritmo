/*2)	Fa�a um algoritmo que calcule o IMC dados a altura e o peso da pessoa.
 A f�rmula para c�lculo �:
Peso/Altura*Altura
Logo ap�s o c�lculo imprimir o resultado e a situa��o da pessoa de acordo com a tabela abaixo.
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
