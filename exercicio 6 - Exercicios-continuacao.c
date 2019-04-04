/*EXERCICIO 6 */
#include <stdio.h>
#include<stdlib.h>


int dobro(int n1,int n2){
int result1,result2;
result1 = n1*2;
result2 = n2*2;
printf("O dobro destes numeros e de %d  %d \n",result1,result2);

}
int quadrado(int n1,int n2){
int result1,result2;
result1 = n1*n1;
result2 = n2*n2;
printf("O quadrado destes numeros e de %d  %d \n",result1,result2);
}
int divisao (int n1,int n2){
int result;
result = n1/n2;
printf("A divisao entre os numeros e de %d\n",result);
}
int resto (int n1,int n2){
int result;
result = n1%n2;
printf("A divisao entre os numeros e de %d\n",result);
}
int soma (int n1,int n2){
int result;
result = n1+n2;
if(result>0){
printf("A soma entre os numero e POSITIVA\n");
}else
printf("A soma entre os numeros e NEGATIVA\n");
}


int main(void)

{
    int n1,n2,op;
    printf("Digite 2 numeros\n");
    scanf("%d%d",&n1,&n2);
    dobro(n1,n2);
    quadrado(n1,n2);
    divisao(n1,n2);
    resto(n1,n2);
    soma(n1,n2);

    return 0;
}


