#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32 //CHECA SE É WINDOWS OU LINUX E INCLUE A BLIBLIOTECA NECESSARIA PARA SLEEP()
#include <Windows.h>
#else
#include <unistd.h>
#endif

//VARIAVEIS GLOBAIS
float value = 0, subtotal = 0;
int quant = 0, quantTotal = 0;
char prod[20];

//OPÇÃO 1
float calcularSubtotal(float value1, int quant1){

  return quant1 * value1;

}

//MENU
void menu(){

  int opt = 0;

  //MENU PRINCIPAL
  printf("\n\n ==Sistema de Vendas==\n\n");
  printf("    1) Ler produto\n");
  printf("    2) Finalizar compra\n");
  printf("    3) Cancelar compra\n");
  printf("    4) Sair\n\n");
  printf(" >> "); //AREA DE INPUT
  scanf("%d",&opt);

  switch (opt) {
    case 1: //LER PRODUTO

      system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

      printf("\n\n ==Ler produto==");

      printf("\n\n    Nome do produto >> ");
      scanf("%s", prod);

      printf("\n\n    Valor >> ");
      scanf("%f",&value);

      printf("\n\n    Quantidade >> ");
      scanf("%d",&quant);

      subtotal += calcularSubtotal(value,quant);

      quantTotal += quant;

      system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

      menu();

    break;
    case 2: //FINALIZAR COMPRA

      if(quantTotal>0){

        system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

        printf("\n\n ==Finalizar Compra==");

        printf("\n\n    Total de produtos comprados: %d",quantTotal);

        printf("\n\n    Valor total: %.2f \n\n",subtotal);

        printf("  Timeout em 10 segundos \n\n");

        sleep(10);

        system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

        menu();

      }else{ //ERRO COM TIMER DE 3 SEGUNDOS

        printf("\n !----ERRO: NENHUM PRODUTO INFORMADO----!\n");

        sleep(3);

        system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

        menu();

      }

    break;
    case 3: //CANCELAR COMPRA

      system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

      subtotal = 0;

      printf("\n  Compra cancelada\n\n");

      sleep(5);

      system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

      menu();

    break;
    case 4: //SAIR

      printf(" Obrigado por comprar com a gente!\n");

      sleep(5);

    break;
    default: //ERRO COM TIMER DE 3 SEGUNDOS

      printf("\n !----ERRO: OPÇÃO INVÁLIDA----!\n");
      sleep(3);

      system("cls"); //MUDAR PARA "CLS" ANTES DE ENVIAR    <----------

      menu();

    break;
  }


}

//MAIN
int main(int argc, char const *argv[]) {

  menu();

  return 0;
}
