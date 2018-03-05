#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, termo, indice = 0;

    printf("digite a quantidade de termos da sequencia :");
    scanf("%d", &termo);

    int fibonacci[termo];
        fibonacci[0] = 0; //inicializamos a sequencia fibonacci que tem os dois primeiros termos fixos
        fibonacci[1] = 1;

    for(i=1; i<=termo; i++){
        indice++; //para podemos identificar o n-esimo termo da sequencia
       fibonacci[i+1] = fibonacci[i] + fibonacci[i-1];

        printf("\n%d", fibonacci[i]);
    }
     printf("\n\no %d-esimo termo da sequencia eh : %d\n", termo, fibonacci[indice] );
     getchar();
    return 0;
}
