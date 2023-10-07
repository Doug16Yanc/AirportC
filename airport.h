#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define tam 900

typedef struct{
    char nome[tam];
    char cpf[tam];
    char rg[tam];
    int id;
} 
Cliente;

typedef struct{
    char origem[tam];
    char destino[tam];
}
Passageiro;

void fornecerInteracao(int *numeroClientes, Cliente **cliente);
void cadastrarCliente(int *numeroClientes, Cliente **cliente);
void venderPassagem(int *numeroClientes, Cliente **cliente);
void efetuarVenda();
void vizualizarocupacao();


