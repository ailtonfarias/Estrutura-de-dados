/*fazer um algoritimo para trasformar segundos em horas, minutos e segundos*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1,num2;
    printf("Digite 2 numeros\n");
    scanf("%d%d",&num1,&num2);
    mult(num1,num2);

}


int mult(int a, int b) {
  int s = 0;
  while (a != 0) {
    if ((a % 2) == 1)
       s = s + b;

    a = a / 2;
    b = b * 2;

  }
      printf("O produto e de %d\n",s);

}
