#include <stdio.h>
#include <stdlib.h>


main(){
  //definicao de variaveis
      double n1, n2, n3, media;
      //entrada de dados
      printf("Digite o primeiro numero:\n");
      scanf("%lf", &n1);
      printf("Digite o segundo numero:\n");
      scanf("%lf",&n2);
      printf("Digite o terceiro numero:\n");
      scanf("%lf",&n3);
      //operacao
      media=(n1+n2+n3)/3;
      //saida de dados
      printf("O primeiro numero foi:\n");
      printf("%f\n", n1);
      printf("O segundo numero foi:\n");
      printf("%f\n", n2);
      printf("O terceiro numero foi:\n");
      printf("%f\n", n3);
      printf("A media e :\n");
      printf("%f\n",media);
      system("pause");
}
      
