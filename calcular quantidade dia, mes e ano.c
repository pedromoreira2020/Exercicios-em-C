#include<stdio.h>

int main(){
	int dias, diasNoMes=30, diasNoAno=365, quantidadeAnos, quantidadeMes, quantidadeDias, restanteDias;

	printf("Digite a quantidade de dias: ");
	scanf("%i", &dias);

	quantidadeAnos=dias/diasNoAno;
	restanteDias=dias%diasNoAno;

	quantidadeMes=restanteDias/diasNoMes;
	quantidadeDias=restanteDias%diasNoMes;

printf(" QUANTIDADE DIAS = %i\n QUANTIDADE MES = %i\n QUANTIDADE ANO = %i\n",quantidadeDias,quantidadeMes,quantidadeAnos);

	return 0;
}
