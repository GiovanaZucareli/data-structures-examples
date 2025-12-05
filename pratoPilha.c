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
    p->prox = pilha; // o prox do novo prato aponta para o atual da pilha
    return p; // retorna o novo topo
}

Prato* rem(Prato *pilha) {
    if (pilha == NULL) {
        printf("Pilha vazia");
    }else {
        Prato *temp = pilha->prox; // armazena o novo topo
        return temp; // retorna novo topo
    }
}

void imprime(Prato *p) {
    if (p!=NULL) {
        printf("\nCor do prato: %c", p->cor);
        imprime(p->prox);
    }
}

int main(void) {
    
    Prato *pilha = NULL;
    
    pilha = add(pilha, 'B');
    pilha = add(pilha, 'R');
    pilha = add(pilha, 'G');

    //imprime(pilha);
   
    pilha = rem(pilha);

    imprime(pilha);
}
