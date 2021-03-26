#include <stdio.h>
int main (){

	int i,x,vetor[10], auxiliar;

	for(i=0;i<10;i++){
	printf("Digite o valor da posição %i: ",i);
	scanf("%i",&vetor[i]);
	}
	for(i=0;i<10;i++){
		for(x=i+1;x<10;x++){
			if(vetor[i]>vetor[x])
			{auxiliar=vetor[i];
				vetor[i]=vetor[x];
				vetor[x]=auxiliar;}}}

	for(i=0;i<10;i++)
	{
	printf("\nO valor da posição %i agora é %i" ,i,vetor[i]);
	}
return 0;
}
