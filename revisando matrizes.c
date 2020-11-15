#include <stdio.h>

int main (){

	const int bimestresAnuais = 4 ;
	const int numeroDeAlunos = 4;

	float notasAlunos[4][4] = {0};
	float mediasAlunos[4] = {0};

	float media=0;

	printf("Insira as 4 notas do aluno1:\n");
	for(int aluno = 0 ; aluno < 4; aluno++){
		for(int notas = 0 ; notas < 4; notas++){
			scanf("%f" , &notasAlunos[aluno][notas]);
			media += notasAlunos[aluno][notas];
	}
		mediasAlunos[aluno] = media / 4;
		media = 0;
		printf("Insira as 4 notas do aluno %i:\n", aluno + 2);
	}

	for (int aluno = 0; aluno < 4; aluno++){
		printf("A media do aluno %i é %2.f\n",aluno + 1, mediasAlunos[aluno]);
	}

	return 0;
}
