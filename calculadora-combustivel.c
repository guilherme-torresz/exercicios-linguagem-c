#include <stdio.h>
int main()
{
    float val_gas = 5.39; //valor das variáveis
    float val_alc = 3.39;
    int op; //op receberá o valor dado pelo usuário (gás ou álcool) como 1 ou 2, e então será validado pelo comando switch no menu
    float qtde;

    printf("\nGASOLINA - 1 ÁLCOOL -2: \n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
        printf("\nGASOLINA\n");
        printf("Quantos litros?");
        scanf("%f",&qtde);
        
        if (qtde <= 20) // caso o cliente compre até 20 litros de gasolina, receberá um desconto de 4% por litro
        {
            printf("VALOR A PAGAR: %.2f",qtde*(val_gas*0.96));
        }

        else

        {
            printf("VALOR A PAGAR: %.2f",qtde*(val_gas*0.94)); // caso compre mais que 20 litros, receberá 6% de desconto por litro

        }
    break;
        case 2:
    
        printf("\nÁLCOOL\n");
        printf("Quantos litros? ");
        scanf("%f",&qtde);

        if (qtde <=20) //caso o cliente compre até 20 litros de álcool, receberá um desconto de 3% por litro
        {
        printf("VALOR A PAGAR: %.2f", qtde*(val_alc*0.97));
        }

        else
        {
        printf("VALOR A PAGAR:%.2f",qtde*(val_alc*0.95)); //caso o cliente compre mais que 20 litros de álcool, receberá 5% de desconto por litro
        }
    break;

    default:
    printf("OPÇÂO INVÁLIDA! "); //caso o usuário digite uma opção inválida, o código imprime uma mensagem de alerta
    break;

    }
    
}
