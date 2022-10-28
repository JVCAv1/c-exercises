#include "stdio.h"
#include "stdlib.h"

char workerName[50];
int month,year,hours;
float hourValue;

int main(int argc, char const *argv[]) {

	int opt,c=1;

	system("clear");

	while(c=1){
		printf("\n\n1-Ler dados\n\n2-Calcular Salário Líquido\n\n3-sair\n\nInforme a opção: ");
		scanf("%d",&opt);

		switch(opt){
			case 1:
				dados()
				break;
			case 2:
				sl()
				break;
			case 3: return 0;
		}
	}
}

void dados(){
	system("clear");

	printf("Nome do funcionário: ");
	scanf

}
