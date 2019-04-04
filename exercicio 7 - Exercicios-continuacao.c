/*EXERCICIO 6 */
#include <stdio.h>
#include<stdlib.h>


int eleicao(int idade){
    if(idade>=18 && idade<70){
        printf("O voto e OBRIGATORIO\n");
    }
if(idade==16 || idade == 17 || idade>=70){
        printf("O voto e FACULTATIVO\n");
    }

}

int main(void)

{
    int idade,titulo;
    char nome[30];
   printf("Digite o nome , titulo e idade\n");
    scanf("%s",&nome);
   scanf("%d%d",&titulo,&idade);
   eleicao(idade);

    return 0;
}


