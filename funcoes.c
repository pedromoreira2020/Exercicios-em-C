#include <stdio.h>
int main(){

	/*declarar função*/
	float calcularAreaRetang(float x, float y);

	/* retorna área e passa os números para a função*/
float area = calcularAreaRetang(10.0, 20.0);

		printf("A area é %f", area);

	return  0;
}
/* recebe os numeros da função*/
float calcularAreaRetang(float base, float altura){

	/* calcula area */
	float area = base*altura;

	/* envia area com oretorno */
	return area;
}


