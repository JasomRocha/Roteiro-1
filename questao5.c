#include <stdio.h>
#include <stdlib.h>

int main()
{
  float alturas[10], maior, menor, somamasc, somaf = 0, mediamasc, mediafemi;
  char sexo[10];
  int i,j, indmaior = 0, indmenor = 0, contmasc=0, contfemi=0;

    for(i=0; i<10; i++){
    printf ("\npessoa %d", i+1);   //Esse for preenche os vetores com altura e sexo
    printf ("\naltura:");
        scanf("%f", &alturas[i]);
    printf("sexo(M/F):");
    scanf("%s", &sexo[i]);
 }
   maior = alturas[0]; //variaveis de comparação sendo atribuidas com os valores da primeira posição do vetor altura
   menor = alturas[0];

    for(i=0; i<10; i++){
        if(alturas[i]>maior){ //aqui encotramos a maior altura e a posição que a maior altura se encontra no vetor
        maior = alturas[i];
        indmaior = i;
        }
    }
    for(i=0; i<10; i++){ //da mesma forma para encontrar a menor altura e a posição dela no vetor
    if(alturas[i]< menor){
        menor = alturas[i];
        indmenor=i;
        }
     }


     printf ("\na maior altura eh :  %0.2f  do sexo : %c", maior, sexo[indmaior]); //imprime na tela a maior e a menor altura, e se é do sexo masculino ou feminino
     printf ("\na menor altura eh : %0.2f do sexo : %c ",menor, sexo[indmenor]); //note que usamos o indice para saber o sexo


    for(i=0;i<10; i++){ //aqu utilizamos um if e um contador para saber a quantidade de homens e mulheres
        if(sexo[i] == 'm' || sexo[i] == 'M'){ //usamos uma variavel que faz a soma de todas a alturas e depois a atribuimos a uma outra variavel media, e dividimos pelo contador;
                contmasc++;
                somamasc += alturas[i];
           }

        else if(sexo[i]== 'f' || sexo[i] == 'F'){
                contfemi++;
                somaf += alturas[i];
        }

}
        mediamasc = (somamasc/contmasc);
        mediafemi = (somaf/contfemi);


            printf ("\na quantidade de homens eh igual a: %0.2d", contmasc); //imprimimos na tela as informações
            printf ("\na quantidade de mulheres eh igual a: %0.2d ", contfemi);
            printf ("\nmedia de altura masculina: %0.2f", mediamasc);
            printf ("\nmedia de altura feminina: %0.2f", mediafemi);
            getchar(); //só pra ficar mais organizado e esperar o usuario dar um enter e encerrar o programa.
            getchar();

 return 0;
}
