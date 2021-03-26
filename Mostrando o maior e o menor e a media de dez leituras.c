#include <stdio.h>

int main (){

	int valor, maior=0, menor=0, i,somador=0, valor1;

	printf("Escreva os valores: \n");
	scanf("%i",&valor1);
	menor=valor1; maior=valor1;

	for(i=1; i<= 9; i++)
	{	scanf("%i", &valor);
		if(maior  < valor) {maior = valor;}
		else {}

			if(menor  > valor) {menor = valor;}
			else {}

somador=somador+valor;}

	printf("\n Maior valor =%i\n Menor valor =%i\n Media =%i", maior, menor, (somador+valor1)/10);





	return 0;


}
