#include <stdio.h>
#include <stdlib.h>
int main(void)
{
        float valor_i,
              valor_f;
        int   juros=0;

        int meses;

        printf("Qual o valor inicial da dívida: ");
        scanf("%f", &valor_i);

        printf("Você vai atrasar quantos meses [1-5]?: ");
        scanf("%d", &meses);

        switch( meses )
        {
            case 5:
                juros++;
            case 4:
                juros++;
            case 3:
                juros++;
            
case 2:
                juros++;
            case 1:
                juros++;
                break;
            default:
                printf("Você não digitou um valor válido de meses\n");

        }
        printf("Juros: %d%\n",juros);
        valor_f=( ((juros/100.0))*valor_i);
        printf("Valor final da dívida: R$ %.2f\n", valor_f);
        system("pause");

}
 
