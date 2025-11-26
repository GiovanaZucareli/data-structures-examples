#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura da musica
typedef struct {
    char nome[50];
} Musica;

// Estrutura da pilha
typedef struct {
    Musica itens[20];
    int quantidade;
}Pilha;

// Inicializando vazia
void inicializar(Pilha *p) {
    p-> quantidade = 0;
};

// Adiciona no topo
void empilhar(Pilha *p, char *nome) {
    strcpy (p->itens[p->quantidade].nome, nome);
    p->quantidade++;
    printf("Adicionada ao historico!\n", nome);
}

int main() {
    
}