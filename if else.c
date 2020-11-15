#include <stdio.h>

int main () {

	int idade;
	printf ("Favor informar a idade: ");
	scanf("%i" , &idade);

	if (idade < 18){
		printf("Bebidas Alcoolicas proibidas");
	}
	else {
		printf("Bebidas Alcolicas liberadas");

	}

	return 0;
}
