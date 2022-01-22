#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, numero;
    
    printf ("entre com o número para  a tabuada:");
    scanf("%d", &numero);
    printf("\n\n versão com while:");
    i=1;
    while (i<=10){
          printf ("\n%d x %d = %d",numero,i, i*numero);
          i=i+1;
          }
          printf ("\n\nVersao com for:");
          for(i=1;i<=10;i++)
          printf ("\n%d x %d=%d",numero,i,i*numero);
          printf ("\n\n\n"); system ("pause");
return 0;
}  
