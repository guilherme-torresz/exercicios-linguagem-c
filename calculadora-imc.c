#include <stdio.h> // Insiro a diretiva padrão da linguagem C (Sua biblioteca)

int main() // Abro a função principal 

{
    float altura; // Variável float para a altura
    float calculoM; // Variável para o peso ideal masculino
    float calculoF; // Variável para o peso ideal feminino
    char sexo; // variável char para o sexo

    printf("\nDigite qual o seu sexo: "); // Imprimimos um pedido para o usuário
    scanf("%c",&sexo); // Recolhemos a informação sobre o sexo do usuário

    printf("\nDigite a sua altura em metros: "); // Idem ao printf comentado anteriormente 
    scanf("%f",&altura); // recolhemos a informação da altura do usuário

    if (sexo != 'M' && sexo != 'F') // Teste lógico para caso o usuário digite um sexo diferente de masculino ou feminino (Conforme os requisitos da atividade)
    {
        printf("\nDigite um sexo válido\n\n"); // Imprime uma mensagem de erro
    }

    else if (sexo == 'M') // Teste lógico caso o sexo seja masculino
    {
        calculoM = (72.7 * altura) - 58; // Cálculo para o peso ideal masculino
        printf("\nO seu peso ideal é: %.2f\n\n",calculoM); //Imprime o peso ideal
    }

    else
    {
        calculoF = (62.1 * altura) - 44.7; // Cálculo para o peso ideal feminino
        printf("\nO seu peso ideal é: %.2f\n\n",calculoF); //Imprime o peso ideal 
    }


}
