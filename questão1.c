#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    float DescontoMinimo, DescontoMedio, DescontoMaximo;

    printf("digite aqui seu salario bruto : R$"); //Recebe o valor do sálario
    scanf("%f", &salario);



    if (salario > 0 && salario <= 420){
        DescontoMinimo = salario*(0.08); //calcula o valor do desconto e imprime na tela
        printf("\no desconto do INSS eh igual a : R$ %0.2f ", DescontoMinimo);
        getchar();
        getchar();
    }
    else if(salario > 420 && salario <= 1350){
        DescontoMedio = salario*(0.09);
        printf("\nDesconto do INSS : R$ %0.2f ", DescontoMedio);
        getchar();
        getchar();
    }
    else if(salario > 1350){
        DescontoMaximo = salario*(0.1);
        printf("\nDesconto do Inss : R$ %0.2f ", DescontoMaximo);
        getchar();
        getchar();
    }
     else
        printf("salario invalido !\a"); //caso seja inserido um valor negativo
        getchar();
        getchar();

    return 0;
}
