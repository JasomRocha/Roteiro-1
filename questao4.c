#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j, count=0;
    char palavra[100];

    printf("escreva a palavra :");
    gets(palavra); //poderia usar o scanf tbm
    strlen(palavra); //contabiliza o tamanho da string

    for(i=0; i<=strlen(palavra)-1; i++){ //for das linhas
        count++; //contador para deterrminar quantas vezes o programa entra no segundo ciclo
        j=0;
        for(j=0; j<count; j++){ //for das colunas
            printf("%c", palavra[j]);
         }
    printf("\n"); //quebra das linhas
    }

    getchar(); //espera o usuario dar enter para encerrar o programa
    return 0;
}
