/*exercicio 1 parte II*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    printf("Digite um numero\n");
    scanf("%d",&num);
    verdadeiro(num);

}


int verdadeiro(int num) {
  if(num>0){
    printf("VERDADEIRO\n");
  }else
  if(num<0){
    printf("FALSO\n");
  }else{
  printf("VALOR NULO\n");
  }


}
