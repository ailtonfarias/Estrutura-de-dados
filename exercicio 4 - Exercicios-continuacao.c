/*Exercicio 4 parte II */

#include <stdio.h>
#define tam 5


int vetor(int vet[], int n)
{
    int i;
    int maior, menor;

    maior = vet[0];
    menor = vet[0];


     for (int i = 0; i < tam; ++i) {
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }

    printf("\n\n Maior: %d\n", maior);
    printf(" Menor: %d", menor);


}

int main(void)

{
    int num[tam];
    int i,n;

    for(i=0 ; i < tam ; i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    vetor(num,tam);

    return 0;

}

