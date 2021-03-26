#include <stdio.h>


	int main(){
float massa, gramas;

int horas=3600, minutos=60, segundos=0, hora1, minutos1,segundos1;

printf("DIgite a quantidade de massa em gramas: ");
scanf("f", gramas);

while (gramas>=0.5){
	segundos=segundos+50;
	gramas=gramas/2;

	hora1=segundos/horas;
	minutos1=segundos/minutos;
	while(minutos1>=60){
		hora1=hora1+1; minutos1=minutos1-60;
	}
	segundos1=segundos%minutos;
	printf("\nMassa Inicial =%f", massa);

}




return 0;}
