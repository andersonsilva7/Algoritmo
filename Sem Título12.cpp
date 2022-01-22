#include <cstdio>
#include <cstdlib>
int main (void){
    int nr, a, b, x;
    
    printf ("1.\tmultiplicar\n");
    printf ("2.\tdividir\n");
    printf ("Escolha uma opcao:\n");
    scanf ("%d", &nr);
    if (nr==1)
    {   //se nr for igual a um executara todo esse bloco
        printf ("Digite os dois numeros que deverao ser multiplicados\n");
        scanf ("%d %d", &a, &b);
        x=a*b;
        system ("cls"); //limpa a tela
        printf ("%d X %d = %d\n", a, b, x);
    }
    else
   
{
        //se nr nao for igual a um executara todo esse bloco
        printf ("Digite os dois numero que deverao ser divididos\n");
        scanf ("%d %d", &a, &b);
        x=a/b;
        system ("cls"); //limpa a tela
        printf ("%d / %d = %d\n", a, b, x);
    }
    system ("pause");
}
