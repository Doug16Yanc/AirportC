#include "airport.h"

int main(void){
   fornecerInteracao();

   return 0;

}

void fornecerInteracao(){

    int opcao;

    do{
        printf("****************************************************************************\n");
        printf("********Bem-vindo(a) ao sistema de gerenciamento de viagens aéreas**********\n");
        printf("  |                  Selecione uma alternativa                           |  \n");
        printf("  |                  1 - Cadastrar cliente                               |  \n");
        printf("  |                  2 - Vender passagem                                 |  \n");
        printf("  |                  3 - Visualizar ocupação                             |  \n");
        printf("  |                  4 - Encerrar programa                               |  \n");
        printf("****************************************************************************\n");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                cadastrarCliente();
                break;
            case 2:
                venderPassagem();
                break;
            case 3:
                visualizarOcupacao();
                break;
            case 4:
                printf("Foi um prazer atendê-lo, tenha um ótimo dia ou ótima noite.\n");
                exit(0);
            default:
                printf("Alternativa inexistente!\n");
                break;
        }
    }
    while(TRUE);
    

}

void cadastrarCliente(){

}

void venderPassagem(){

}

void visualizarOcupacao(){

}
