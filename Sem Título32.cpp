//1)	Imprimir os n�meros de 0 a 100.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    int i=0;
    printf("Vers�o com while:\n");
    while (i<=100){
          printf ("%d",i);
          i++;
    }
    printf ("\n\nVers�o com for:\n");
     for(i=0;i<=100;i++)
        printf ("%d",i);
        printf ("\n");                
system ("pause");
}  
