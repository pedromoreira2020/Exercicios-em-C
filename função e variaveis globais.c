#include <stdio.h>

int gVariavelGlobal = 2;

int main() {

	void teste(void);

	printf("Global main = %i\n", gVariavelGlobal);
	teste();
	teste();
	teste();


	return 0;


}

void teste(void) {
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *=2;


	//global se comporta como estatica
	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *=2;
gVariavelGlobal *=2;

	printf("Local Automática = %i\n",variavelLocalAutomatica);
	printf("Local Estática = %i\n",variavelLocalEstatica);
	printf("Global função teste = %i\n", gVariavelGlobal);


}
