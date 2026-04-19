#include <stdio.h>
int main()
{
    float n1,n2,n3;//declarar variáveis das notas
    printf("Digite as notas 1, 2 e 3: ");
    scanf("%f %f %f",&n1,&n2,&n3);//leitura das notas fornecidaspelo usuário
    float media_final= (n1*2 + n2*3 + n3*5)/10;//cálculo da média final
    printf("%.2f",media_final);//imprimir média final
    
}
