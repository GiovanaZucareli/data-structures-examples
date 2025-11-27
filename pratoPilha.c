#include <stdio.h>
#include <stdlib.h>

struct prato {
    char cor;
    struct prato *prox;
};

typedef struct prato Prato;

// Ponteiro pilha guarda o primeiro elemento
Prato *pilha;

void add(char cor){
    Prato *p = (Prato*) malloc(sizeof(Prato));
    p->cor = cor;
    p->prox = pilha; // Apontando para o primeiro elemento
    pilha = p; // Insere sempre no inicio
}

void rem() {
    if (pilha == NULL) {
        printf("Pilha vazia");
    }else {
        pilha = pilha->prox;
    }
}

void imprime(Prato *p) {
    if (p!=NULL) {
        printf("\nCor do prato: %c", p->cor);
        imprime(p->prox);
    }
}

int main(void) {
    add('B');
    add('R');
    add('G');

    //rem();

    Prato *pilhaAux = pilha;
    imprime(pilhaAux);
}