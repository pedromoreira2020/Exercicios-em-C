#include<stdio.h>
int main(){

	float nota;

	printf("Digite a média do aluno");
		scanf("%f", &nota);

	if (nota >=9.0){printf("O conceito é: A\n");}
	else if((nota >= 7.5)&& (nota < 9.0)){printf("O conceito é B\n");
	}else if ((nota >= 6.0)&&(nota < 7.5)){printf("O conceito é C\n");}
	else if((nota >= 4.0)&& (nota <6.0)){printf("O conceito é D\n");
	} else if (nota <4){printf("O conceito é E\n");}

	if(((nota >=9.0)) || ((nota >= 7.5)&& (nota < 9.0)) || ((nota >= 6.0)&&(nota < 7.5))){
printf("Aprovado");}
	else{printf("Reprovado!");}
	return 0;
}
