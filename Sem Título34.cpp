//3)	Imprimir a m�dia dos n�meros pares de 0 a 50
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"Portuguese");
    int num=0, cont=0, media, pares=0;
    while(num<=50){
    num++;
      if (num%2==0){
      cont++;
      pares=pares+num;
      }
    }
    media=pares/cont;
    printf("A m�dia de n�meros pares de 0 a 50 � %d\n",media);       
system ("pause");
}  
