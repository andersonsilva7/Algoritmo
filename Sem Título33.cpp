//2)	Imprimir quantos números pares existem entre 1 e 500

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"Portuguese");
int i=0, cont=0;    
    while(i<=500){
    i++;
      if (i%2==0){ 
   cont++;                           
      } 
   }
printf("Existem %d números pares entre 1 e 500",cont);
       
system ("pause");
}  
