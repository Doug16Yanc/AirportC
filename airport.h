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
Cliente[tam];
Cliente cliente;

typedef struct{
    char origem[tam];
    char destino[tam];
}
Passageiro[tam];
Passageiro passageiro;

void fornecerInteracao();
void cadastrarCliente(int *numeroClientes);
void venderPassagem(int *numeroClientes);
void vizualizarocupacao();

