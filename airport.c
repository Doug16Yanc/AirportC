#include "airport.h"

int main(void){
   fornecerInteracao();

   return 0;

}

void fornecerInteracao(int *numeroClientes){

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
                cadastrarCliente(&numeroClientes);
                break;
            case 2:
                venderPassagem(&numeroClientes);
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

void cadastrarCliente(int *numeroClientes){
    int entrada, aux, i, j, num; /*variavel utilizada para validar entradas inseridas pelo usuario*/
    i = *numeroClientes;
    
    for(i = 0; i < tam; i++)
    {
        if(cliente[i].id == 0)
        {
            num = i;
            break;
        }
    }

    entrada = rand() % (999999 + 1 - 100000) + 100000;
    aux = TRUE;
    while(entrada != 1)
    {
        for(i = 0; i < tam; i++)
        { 
            if(entrada == cliente[i].id)
            {
                aux = FALSE;
            }
        }

        if(aux == TRUE)
        {
            cliente[num].id = entrada;
            entrada = 1;
        }
        else
        {
            entrada = rand() % (999999 + 1 - 100000) + 100000;
        }
    }
    
    printf("Solicitando operação para realizar cadastro de cliente no sistema de gerenciamento.\n");
    
    getchar();

    printf("Digite o nome do cliente: ");
    fflush(stdin);
    fgets(cliente[i].nome, tam, stdin);

    printf("CPF do cliente: ");
    fflush(stdin);
    fgets(cliente[i].cpf, tam, stdin);

    printf("RG do cliente: ");
    fflush(stdin);
    fgets(cliente[i].rg, tam, stdin);
    

      
    printf("\n***********************************************\n");
    printf("Cadastro de cliente realizado com sucesso:\n");
    printf("***********************************************\n");
    printf("MEMORANDO DE CADASTRO DE CLIENTE\n");
    printf("> Nome : %s\n", cliente[i].nome);
    printf("> Cadastro de pessoa física : %s\n", cliente[i].cpf);
    printf("> Registro geral : %s\n", cliente[i].rg);
    printf("> Id do cliente : %d", cliente[num].id);
    
    (*numeroClientes)++;

}


void venderPassagem(int *numeroClientes){

    char CPF;
    int i, clienteEncontrado = TRUE;

    printf("Digite o CPF do cliente:\n");
    scanf("%s", &CPF);


    if (numeroClientes > 0){

        for (i = 0; i < *numeroClientes; i++){
        
            if(strcmp(CPF, cliente[i].cpf) == 0){
                clienteEncontrado = i;
                break;
            }
        }
        if (clienteEncontrado != -1){

        }
        else{
            printf("Cliente não encontrado, portanto, não foi possível realizar venda\n");
            printf( "de passagem, realize antes o cadastro do cliente.\n");
        }
    }
}

void visualizarOcupacao(){
    /*Sem implementação ainda*/
}