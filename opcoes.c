#include <stdio.h>
#include "bib.h"

int opcoes(int opcao){
    printf("Digite a opção desejada: \n");
    printf("Opção 1: Soma\n");
    printf("Opção 2: Subtração\n");
    printf("Opção 3: Multiplicação\n");
    printf("Opção 4: Divisão\n");
    scanf("%d", &opcao);

    return opcao;
}