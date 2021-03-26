#include <stdio.h>

int main (){

	int idade;

	printf("informe a idade");
	scanf ("%i" , &idade);

	if(idade <= 5)

		printf("Você é um bebe");
	else if (idade > 5 && idade <= 10)

		printf("você é uma criança");
else if  (idade > 10 && idade < 18)

	printf("você é um adolescente");
	else if (idade >= 18 && idade <= 50)

		printf("você é um adulto");

		else
			printf("idoso");


	return 0;
}
