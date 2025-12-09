#include <stdio.h>
#include <stdlib.h>

struct prato {
    char cor;
    struct prato *prox;
};

typedef struct prato Prato;

Prato* add(Prato *pilha, char cor){
    Prato *p = (Prato*) malloc(sizeof(Prato));
    p->cor = cor;
    p->prox = pilha->prox; // novo aponta pro primeiro elemento 
    pilha->prox = p; //cabeça aponta pro novo
    return pilha; 
}

Prato* rem(Prato *pilha) {
    if (pilha->prox == NULL) {
        printf("Pilha vazia");
    }else {
        Prato *temp = pilha->prox; // armazena o novo topo
        pilha->prox = temp->prox;
    }
    return pilha;
}

void imprime(Prato *pilha) {
    Prato *p = pilha->prox;
    while (p!=NULL) {
        printf("\nCor do prato: %c", p->cor);
        p = p->prox;
    }
}

int main(void) {
    
    Prato *pilha = (Prato*) malloc(sizeof(Prato)); //cabeca fixa
    pilha->prox = NULL;
    
    add(pilha, 'B');
    add(pilha, 'R');
    add(pilha, 'G');

    //imprime(pilha);
   
    //pilha = rem(pilha);

    imprime(pilha);
}
