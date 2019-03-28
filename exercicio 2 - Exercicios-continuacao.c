/*exercicio 2 parte II*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1,num2;
    printf("Digite dois numeros\n");
    scanf("%d%d",&num1,&num2);
    funcao1(num1,num2);
    funcao2(num1,num2);
    funcao3(num1,num2);

}


int funcao1(int num1,int num2) {
    int d1,d2;
if(num1>0 && num2<0){
d1=num1*2;
d2=num2*2;
printf("O dobro dos numeros e de %d  %d\n",d1,d2);
}

}

int funcao2(int num1,int num2) {
    int m;
if(num1>0 && num2<0){
m=num1*num2;
printf("O produto e de %d\n",m);
}
}

int funcao3(int num1,int num2) {
if(num1*num2>1){
printf("O resutado da muliplicacao e positivo\n");
}else
printf("O resultado da multiplicacao e negativo");

}

