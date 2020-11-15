#include <stdio.h>

int main(){

int valor, centena, dezena, unidade, resto1, resto2;

printf("Digite um valor de 3 digitos");

scanf("%i",&valor);

centena=valor/100;
dezena=valor%100;
unidade=dezena%10;

		dezena=dezena/10;

printf("centena %i, dezena %i, unidade%i", centena,dezena,unidade);




return  0;
}
