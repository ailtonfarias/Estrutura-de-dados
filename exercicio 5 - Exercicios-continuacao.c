/*EXERCICIO 5 */
#include <stdio.h>
#include<stdlib.h>


int operador(int opcao){
int n1,n2,operacao;


printf("Digite 2 numeros\n");
scanf("%d%d",&n1,&n2);
switch(opcao){
case 1:
operacao = n1+n2;
printf("O resultado e %d\n",operacao);
break;
case 2:
    operacao = n1-n2;
    printf("O resultado e %d\n",operacao);

    break;
case 3:
    operacao = n1*n2;
    printf("O resultado e %d\n",operacao);

    break;
case 4:
    operacao = n1/n2;
    printf("O resultado e %d\n",operacao);

    break;
}
}


int main(void)

{
    int n1,n2,op;
    while(op!=0){
    printf("1 - Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    printf("Escolhar uma operacao\n\n");
    scanf("%d",&op);
    system("cls");
    operador(op);
    }
    return 0;
}

