#include <stdio.h>

int main(){

	void teste(void);
	teste();
	teste();
	teste();


	return 0;


}

void teste(void){
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *=2;

	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *=2;


	printf("Local Automática = %i\n",variavelLocalAutomatica);
	printf("Local Estática = %i\n",variavelLocalEstatica);

}
