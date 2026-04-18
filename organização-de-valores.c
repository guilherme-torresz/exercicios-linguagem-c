#include <stdio.h>
int main()
{
    float a,b,c; //definindo variáveis a,b,c com o tipo float, para trabalharmos com inteiros e decimais.
    int n; // declarando a variável n como int, pois poderemos apenas escolher entre 3 modos de organização, marcados por 1,2,3
    printf(" Digite os valores de a,b,c: "); //entrada dos valores de a,b,c
    scanf("%f %f %f", &a,&b,&c); // leitura dos valores como tipo float
    printf("%.2f %.2f %.2f", a,b,c); // imprime os valores float com 2 casas decimais

    printf("\nDigite o valor de N: 1-crescente 2-decrescente 3-maior valor no meio\n "); // menu de opções
    scanf("%d",&n);

    if (n==1) //caso n==1 (crescente)
    {
        if (a<=b && b<=c) // verifica todas as combinações possíveis entre os valores e os imprime em ordem crescente
        {
            printf("%.2f %.2f %.2f", a,b,c);
        }

        else if (a<=c && c<=b)
        {
            printf("%.2f %.2f %.2f",a,c,b);

        }

        else if (b<=a && a<=c)
        {
            printf("%.2f %.2f %.2f",b,a,c);
        }

        else if (b<=c && c<=a)
        {
            printf("%.2f %.2f %.2f",b,c,a);
        }
        
        else if (c<=a && a<=b)
        {
            printf("%.2f %.2f %.2f",c,a,b);
        }

        else if (c<=b && b<=a)
        {
            printf("%.2f %.2f %.2f",c,b,a);
        }
    }

    else if (n==2) //caso n==2 (decrescente)
    {
            if (a<=b && b<=c) //verifica todas as combinalções possíveis e imprime em ordem decrescente
        {
            printf("%.2f %.2f %.2f", c,b,a);
        }

        else if (a<=c && c<=b)
        {
            printf("%.2f %.2f %.2f",b,c,a);

        }

        else if (b<=a && a<=c)
        {
            printf("%.2f %.2f %.2f",c,a,b);
        }

        else if (b<=c && c<=a)
        {
            printf("%.2f %.2f %.2f",a,c,b);
        }
        
        else if (c<=a && a<=b)
        {
            printf("%.2f %.2f %.2f",b,a,c);
        }

        else if (c<=b && b<=a)
        {
            printf("%.2f %.2f %.2f",a,b,c);
        }
    }

    else if (n==3) //se n==3 (maior valor no meio)
    {
         if (a<=b && b<=c)//verifica todas as combinações possíveis, de forma que o maior valor seja impresso no meio
        {
            printf("%.2f %.2f %.2f",a,c,b);
        }

        else if (a<=c && c<=b)
        {
            printf("%.2f %.2f %.2f",a,b,c);

        }

        else if (b<=a && a<=c)
        {
            printf("%.2f %.2f %.2f",b,c,a);
        }

        else if (b<=c && c<=a)
        {
            printf("%.2f %.2f %.2f",b,a,c);
        }
        
        else if (c<=a && a<=b)
        {
            printf("%.2f %.2f %.2f",c,b,a);
        }

        else if (c<=b && b<=a)
        {
            printf("%.2f %.2f %.2f",c,a,b);
        }

    }

else //caso o usuário digite um valor inválido no menu, o alerta "Digite um valor válido!" aparece.
{
    printf("Digite um valor válido! ");
}

}
