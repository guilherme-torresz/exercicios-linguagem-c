#include <stdio.h>
int main()
{
    float temp_c,temp_f;//variáveis de temperatura em Celsius e Fahrenheit
    printf("Digite a temperatura, em graus Celsius: ");
    scanf("%f",&temp_c);//lê a temperatura em graus Celsius
    temp_f = (temp_c*1.8)+32;//converta Celsius em Fahrenheit pelo cálculo e armazena o resultado na variável correspondente
    printf("%.2f°C são %.2f°F",temp_c,temp_f);//imprime o valor em graus Celsius e seu correspondente em Fahrenheit
}
