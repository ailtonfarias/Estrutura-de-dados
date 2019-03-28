/*fazer um algoritimo para trasformar segundos em horas, minutos e segundos*/
#include <stdio.h>
#include <stdlib.h>


int converter(int segundo){
int hora,minuto,conver_hora,convert_minuto,convert_segundo;
hora=3600;
minuto=60;
conver_hora = segundo/hora;
convert_minuto = (segundo-(hora*conver_hora))/60;
convert_segundo = (segundo-(hora*conver_hora)-(convert_minuto*60));
printf("%dh : %dm :%ds \n",conver_hora,convert_minuto,convert_segundo);

}
int main()
{
    int segundos;
    printf("Digite o valor em segundos");
    scanf("%d",&segundos);
    converter(segundos);
    return 0;
}
