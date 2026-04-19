
//Programa que lê o salário atual de um funcionário e gera um acréscimo de 25%.
#include <stdio.h>

int main()
{
    float salario_atual,salario_aumento;

    printf("\nDigite o seu salário atual: ");
    scanf("%f",&salario_atual);

    salario_aumento = salario_atual * 1.25; //cálculo de acréscimo

    printf("\nO seu salário com um aumento de 25%% será de: R$%.2f\n\n",salario_aumento);

}
