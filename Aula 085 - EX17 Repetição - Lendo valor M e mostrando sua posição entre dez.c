#include <stdio.h>
int main (){
int valorM, posicao=0, indice=1, elemento;

printf("Digite o valor M: ");
scanf("%i", &valorM);

printf("Agora digite 10 elementos: ");


while(indice <= 10){
		scanf("%i", &elemento);
				if(elemento==valorM){ posicao=indice;}else {}
		indice=indice+1;


}
if (posicao!=0) {printf("\n O elemento M está na posição %i", posicao);}
else {printf("\n O valor M não existe entre os dez elementos!");}







	return 0;
}
