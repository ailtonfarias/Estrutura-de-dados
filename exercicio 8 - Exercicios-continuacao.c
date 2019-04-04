/*EXERCICIO 8 */
#include <stdio.h>
#include<stdlib.h>


int cd1(int n1, int n2){
    int result;
 if(n1>0){
        result= n1*n1;
        printf("O seu quadrado do 1 numero e de %d\n",result);

 }
}
 int cd2(int n1,int n2){
 if(n2>=10 && n2<=100){
    printf("Numero esta entre 10-100,intervalo permitido\n");
 }
 }

int cd3(int n1, int n2){
    int result;
if(n2<n1){
    result=n1-n2;
        printf("A diferenca entre os dois numeros e de %d\n",result);

}else
result = n1+1;
        printf("O resultado do 1 numero  e de %d\n",result);
}


int main(void)

{
    int n1,n2;
   printf("Digite dois numeros positivos\n");
   scanf("%d%d",&n1,&n2);
   cd1(n1,n2);
   cd2(n1,n2);
   cd3(n1,n2);
    return 0;
}




