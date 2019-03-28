/*fazer um algoritimo para fazer o resto de uma divisao*/
#include <stdio.h>
#include <stdlib.h>


int resto_divisao(int n1,int n2){
    int resto;
    resto = n1%n2;
    printf("O resto da divisao e %d",resto);


}
int main()
{
    int num1,num2;
    printf("Digite 2 numeros\n");
    scanf("%d%d",&num1,&num2);
    resto_divisao(num1,num2);

    return 0;
}
