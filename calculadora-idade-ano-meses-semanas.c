#include <stdio.h>

int main()

{
    float data_nascimento,ano_atual,idade_anos,idade_meses,idade_semanas;

    printf("\nDigite o seu ano de nascimento: ");
    scanf("%f",&data_nascimento);

    printf("\nDigite o ano atual: ");
    scanf("%f",&ano_atual);

    idade_anos = ano_atual - data_nascimento;

    printf("\nA sua idade em anos é %.f anos\n",idade_anos);

    idade_meses = idade_anos * 12;

    printf("\nA sua idade em meses é %.f meses\n\n",idade_meses);

    idade_semanas = idade_meses * 4.3482; // O valor de semanas em um ano é de 52,1786, dividido por 12 da 4.3482

    printf("Sua idade em semanas é %.f semanas\n\n",idade_semanas);

}
