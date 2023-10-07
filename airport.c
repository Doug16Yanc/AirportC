#include "airport.h"


int main(void){
    int numeroClientes = 0;
    Cliente *cliente = NULL;
   fornecerInteracao(&numeroClientes, &cliente);

   free(cliente);

   return 0;

}

void fornecerInteracao(int *numeroClientes, Cliente **cliente){

    int opcao;

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
            cadastrarCliente(numeroClientes, cliente);
            break;
        case 2:

            venderPassagem(numeroClientes, cliente);
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

void cadastrarCliente(int *numeroClientes, Cliente **cliente){
    (*numeroClientes)++;
    *cliente = (Cliente *)realloc(*cliente, (*numeroClientes) * sizeof(Cliente));

    if (*cliente == NULL){
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    int entrada, aux, i, j, num; /*variavel utilizada para validar entradas inseridas pelo usuario*/
    i = *numeroClientes - 1;
    for(i = 0; i < tam; i++)
    {
        if((*cliente)[i].id == 0)
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
            if(entrada == (*cliente)[i].id)
            {
                aux = FALSE;
            }
        }

        if(aux == TRUE)
        {
            (*cliente[num]).id = entrada;
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
    fgets((*cliente)[i].nome, tam, stdin);

    printf("CPF do cliente: ");
    fflush(stdin);
    fgets((*cliente)[i].cpf, tam, stdin);

    printf("RG do cliente: ");
    fflush(stdin);
    fgets((*cliente)[i].rg, tam, stdin);
    

    printf("\n***********************************************\n");
    printf("Cadastro de cliente realizado com sucesso:\n");
    printf("***********************************************\n");
    printf("MEMORANDO DE CADASTRO DE CLIENTE\n");
    printf("> Nome : %s\n", (*cliente)[i].nome);
    printf("> Cadastro de pessoa física : %s\n", (*cliente)[i].cpf);
    printf("> Registro geral : %s\n", (*cliente)[i].rg);
    printf("> Id do cliente : %d\n", (*cliente)[num].id);
    
    (*numeroClientes)++;

    fornecerInteracao(numeroClientes, cliente);

}


void venderPassagem(int *numeroClientes, Cliente **cliente){

    int ID, i;

    if (numeroClientes > 0){
        printf("Digite o id do cliente:\n");
        scanf("%d", &ID);

        int clienteEncontrado = 1;

        for (i = 0; i < *numeroClientes; i++){
        
            if(ID == cliente[i]->id){
                clienteEncontrado = i;
                break;
            }
        }
        if (clienteEncontrado != -1){
            efetuarVenda();

        }
        else{
            printf("Cliente não encontrado, portanto, não foi possível realizar venda\n");
            printf( "de passagem, realize antes o cadastro do cliente.\n");
        }
    }
    else{
        printf("Nenhum cliente cadastrado no sistema de gerenciamento.\n");
    }
    fornecerInteracao(numeroClientes, cliente);
}

void efetuarVenda(){
    printf("Cliente encontrado com sucesso.\n");
}

void visualizarOcupacao(){
    /*Sem implementação ainda*/
}
