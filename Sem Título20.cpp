#include <stdio.h>
#include <stdlib.h>


int main(){
    int num;
    int quad;
    printf("Digite uma sequencia terminada por zero\n");
    scanf("%d",&num);
    while (num  != 0)
    {
          quad = num * num;
          
          printf("o quadrado de %d = %d\n", num, quad);
          printf("digite outro numero\n");
          scanf ("%d",&num);
           }

system("pause");
return 0;
}
