#include <stdio.h>
#include <stdlib.h>
int main(void){
    float nota1=0,nota2=0,media=0;
    int resp;
    do
    {
        printf ("digite a primeira nota:");
        scanf ("%f",&nota1);
        printf("digite a segunda nota:");
        scanf ("%f",&nota2);
     
        media=(nota1+nota2)/2;
        printf ("média do aluno =%f\n",media);
        
        printf ("digite 1 para continuar ou 2 para sair\n");
        scanf ("%d",&resp);
        } 
        while ((resp==1)||(resp== 2)||(resp==3));
system ("pause");       
return 0;
}
             
        
