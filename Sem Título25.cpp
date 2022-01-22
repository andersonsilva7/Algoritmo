#include <stdio.h>
#include <stdlib.h>
main(){
       int maior=0,num, count=1;
       while (count<=10){
             printf("Digite o numero %d:",count);
             scanf("%d",&num);
             if(num>maior)
             maior=num;
             count++;
             }
             printf ("Maior:%d", maior);
             system ("pause");
             }
             
