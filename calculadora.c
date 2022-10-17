#include <stdio.h>
#include "bib.h"

int main()
{
    int x, auxiliar;
    float numero1, numero2, resultado;
    

    auxiliar = opcoes(x);

    if (auxiliar == 1){
        printf("Digite um numero: ");
        scanf("%f", &numero1);

        printf("Digite o numero para somar com %.2f: ", numero1);
        scanf("%f", &numero2);

        soma(numero1, numero2);

        resultado = soma(numero1, numero2);

        printf("O resultado da soma é: %.2f", resultado);
    }
    else if (auxiliar == 2){
        printf("Digite um numero: ");
        scanf("%f", &numero1);

        printf("Digite o numero para subtrair com %.2f: ", numero1);
        scanf("%f", &numero2);

        subtracao(numero1, numero2);

        resultado = subtracao(numero1, numero2);

        printf("O resultado da subtracao é: %.2f", resultado);

    }
    else if (auxiliar == 3){
        printf("Digite um numero: ");
        scanf("%f", &numero1);

        printf("Digite o numero para multiplicar com %.2f: ", numero1);
        scanf("%f", &numero2);

        multiplicacao(numero1, numero2);

        resultado = multiplicacao(numero1, numero2);

        printf("O resultado da multiplicacão é: %.2f", resultado);
    }
    else if (auxiliar == 4){
        printf("Digite um numero: ");
        scanf("%f", &numero1);

        printf("Digite o numero para dividir com %.2f: ", numero1);
        scanf("%f", &numero2);

        resultado = divisao(numero1, numero2);

        printf("O resultado da divisão é: %.2f", resultado);
    }
}