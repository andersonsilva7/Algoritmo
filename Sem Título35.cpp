//4 Faça um programa em C para exibir a tabuada de 9. Use laços para fazer cada operação.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
int i=1,a,b;
float d=1.0;

printf("Tabuada de 9\n\nAdição");
for(a=i;a<=10;a++){
          printf("\n%d + %d = %d",9,a,a+9);
          }
          printf ("\n\n");
printf("Subtração");
for(b=i;b<=10;b++){
          printf("\n%d - %d = %d",9,b,9-b);
          }
          printf ("\n\n");
printf("Multiplicação");
for(i=1;i<=10;i++){
          printf("\n%d x %d = %d",9,i, i*9);
          }
          printf ("\n\n");
printf("Divisão");
for(d=1.0;d<=10.0;d++){
          printf("\n%.2f ÷ %.2f = %.2f",9.0,d,9.0/d);
          }
          printf ("\n\n");

system ("pause");
}  
