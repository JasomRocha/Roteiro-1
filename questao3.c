#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char palavra[100], inverso[100];
    int tamanho=0, j=0,i;

    printf("Digite uma palavra : ");
        gets(palavra); //guarda a string
        strlen(palavra);

    for(i=strlen(palavra)-1; i>=0; i--){
        inverso[j] = palavra[i]; //preenche a primeira posição do vetor de caracteres inverso com a ultima posição
        j++;                     // do vetor de caracteres palavra.
    }
        inverso[j]= '\0'; //para designar onde termina a cadeia de caracteres.
        printf("inverso: %s", inverso);

    if (strcmp(palavra, inverso)==0){          //outra função da biblioteca sting.h que compara
    printf("\n%s eh palindromo", palavra);    //as duas strings e retorna 0, 1 ou -1. 0 se forem iguais.
    }

        else{
            printf("\nnao eh palindromo !");
        }

        getchar();
        getchar();
    return 0;
}
