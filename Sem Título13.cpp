#include <stdio.h>
#include <stdlib.h>

int main()
{
        char operacao;
        float num1,num2;
              

        printf("Escolha sua opera��o [+ - * / ]: ");
        scanf("%c",&operacao);

        printf("Entre com o primeiro n�mero: ");
        scanf("%f",&num1);

        printf("Entre com o segundo n�mero: ");
        scanf("%f",&num2);

        switch( operacao )
        {
            case '+':
                printf("%.2f + %.2f=%.2f",num1,num2,num1+num2);
                break;
 case '-':
                printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
                break;

            case '*':
                printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
                break;

            case '/':
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
                break;

            default:
                printf("Voc� digitou uma operacao invalida.");

        }system("pause");

}
