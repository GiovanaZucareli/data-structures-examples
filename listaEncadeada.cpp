#include <iostream>
using namespace std;

struct No {
    int dado;
    No* proximo;
};

No* inicio = nullptr; // Ponteiro nulo para início da lista

void inserir(int valor) {
    No* novo = new No();
    novo->dado = valor;
    novo->proximo = inicio;
    inicio = novo;
}

void exibir() {
    No* atual = inicio;
    while (atual != nullptr) {
        cout << atual->dado << " -> ";
        atual = atual->proximo;
    }
    cout << "NULL" << endl;
}

void remover(int valor) {
    //Se for o primeiro
    if (inicio != nullptr && inicio->dado == valor) {
        No* temp = inicio;
        inicio - inicio->proximo;
        delete temp;
        return;
    }

    // Procurar o valor
    No* atual = inicio;
    while (atual->proximo != nullptr) {
        if (atual->proximo->dado == valor) {
            No* temp = atual->proximo;
            atual->proximo = temp->proximo;
            delete temp;
            return;
        }
        atual = atual->proximo;
    }
}

int main() {

    inserir(5);
    inserir(3);
    inserir(8);

    cout << "Lista: ";
    exibir();

    remover(3);
    cout << "Removendo da lista: ";
    exibir();

    return 0;
}