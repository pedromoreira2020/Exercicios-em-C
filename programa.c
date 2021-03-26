#include <stdio.h>
int main (){

int i, vetor[10], x, contador=0;

for(i=0;i<10;i++){
	printf("Digite o valor da posição %i: ", i);
	scanf("%i",&vetor[i]);}

	for(i=0;i<10;i++){
		for(x=i+1;i<10;x++){
				if(vetor[i]==vetor[x]){printf("\n O valor %i se repete",vetor[i]);} else{contador=contador+1;}
							}
					}
	if (contador==45){printf("Nenhum valor se repete");} else{}

	return 0;
}
