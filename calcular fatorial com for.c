#include <stdio.h>

int main (){

	int fatorial = 5;
	int resposta = 1;

	for ( ; fatorial >= 1; fatorial--){
		resposta *= fatorial;
	}

	printf("o fatorial é %i", resposta);

	return 0;
}
