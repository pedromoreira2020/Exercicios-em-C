#include <stdio.h>

int main (){

	int numero, i=1, resultado=0;

	printf("Digite um número");

	scanf("%i", &numero);
	while (i <=numero){
		if (numero%i==0){resultado=resultado+1;} else {}
		i=i+1;
	}
	if(resultado==2){printf("\n O número é primo!");}
	else {printf("\n O numero não é primo!");}





	return 0;
}
