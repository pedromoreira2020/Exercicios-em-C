#include <stdio.h>


#define SIZE 200
char name[SIZE] [50];
char email[SIZE] [50];
int cpf[SIZE];
int options;
void enrollment();
void search();
void list();

int main(void){
	do{
		system("clear");
		printf("\n======Menu=====\n1 - Cadastrar\n2 - Listar Todos\n3 - Pesquisar\n4 - Sair\n");
		scanf("%d", &options);
		switch(options){

		case 1:
		enrollment();
		break;

		case 2:
		list();
		break;

		case 3:
		search();
		break;

		case 4:
		system("exit");
		break;

		default:
		printf("Opção Inválida.");
		break;

		}
	}while(options!=4);
}
void list(){
	int i;
	for(i=0;i<SIZE;i++){
		if (cpf[i]>0){
		printf("\nNome: %s\nEmail: %s\nCPF: %d\n", name[i], email[i], cpf[i]);
		}else {
			break;
		}
	}
	getchar();
	getchar();

}
void enrollment(){

	static int line;
	do{
		printf("Digite o Nome: ");
		scanf("%s", &name[line]);
		printf("\nDigite o e-mail: ");
		scanf("%s" , &email[line]);
		printf("\nDigite o CPF: ");
		scanf("%d", &cpf [line]);
		printf("\nDigite 1 para continuar ou outro valor para sair: ");
		scanf("%d", &options);
		line++;
	}while(options==1);
}//end of the registration function

void search(){
	int cpfSearch;
	char emailSearch[50];
	int i;
	do{
		printf("\nDigite 1 para pesquisar por CPF ou 2 para pesquisar por e-mail: ");
		scanf("%d",&options);
		switch(options){
		case 1:
			printf("\nDigite o CPF: ");
			scanf("%d", &cpfSearch);
			for(i=0; i<SIZE;i++){
				if(cpf[i]==cpfSearch){
					printf("\nNome: %s\nEmail: %s\nCPF: %d\n", name[i], email[i], cpf[i]);

				}
			}

			break;

		case 2:
			printf("Digite o e-mail: ");
			scanf("%s", emailSearch);
			for(i=0; i<SIZE;i++){
				if(strcmp(email[i], emailSearch)==0){
					printf("\nNome: %s\nEmail: %s\nCPF: %d\n", name[i], email[i], cpf[i]);

							}
			}
			break;

		default:
			printf("\nOpção Inválida");
			break;
		}
		printf("\nDigite 1 para continuar pesquisando: ");
		scanf("%d", &options);
	}while(options==1);
}

