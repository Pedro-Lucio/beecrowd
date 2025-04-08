#include <iostream>
#include <cstdlib>

using namespace std;

struct No {
    char valor;
    No* proximo;
};

struct Pilha {
    No* topo;
};

void inicializarPilha(Pilha* pilha);
void empilhar(Pilha* pilha, char valor);
void desempilhar(Pilha* pilha);
char topo(Pilha* pilha);
bool temMaiorPrioridade(char atual, char topoPilha);
void converterParaPosfixa(const char* expressao);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unsigned short quantidadeCasos;
    char expressao[400];

    cin >> quantidadeCasos;

    while (quantidadeCasos--) {
        cin >> expressao;
        converterParaPosfixa(expressao);
    }

    return 0;
}

void converterParaPosfixa(const char* expressao) {
    Pilha pilha;
    inicializarPilha(&pilha);
    empilhar(&pilha, '(');

    int i = 0;
    char c, t;

    do {
        c = expressao[i++];

        if (isalnum(c)) {
            cout << c;
        } else if (c == '(') {
            empilhar(&pilha, '(');
        } else if (c == ')' || c == '\0') {
            do {
                t = topo(&pilha);
                desempilhar(&pilha);
                if (t != '(') {
                    cout << t;
                }
            } while (t != '(');
        } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            while (true) {
                t = topo(&pilha);
                desempilhar(&pilha);
                if (temMaiorPrioridade(c, t)) {
                    empilhar(&pilha, t);
                    empilhar(&pilha, c);
                    break;
                } else {
                    cout << t;
                }
            }
        }
    } while (c != '\0');

    cout << '\n';
}

void inicializarPilha(Pilha* pilha) {
    pilha->topo = nullptr;
}

void empilhar(Pilha* pilha, char valor) {
    No* novo = new No;
    if (!novo) exit(1);
    novo->valor = valor;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
}

void desempilhar(Pilha* pilha) {
    if (pilha->topo) {
        No* temp = pilha->topo;
        pilha->topo = temp->proximo;
        delete temp;
    }
}

char topo(Pilha* pilha) {
    return pilha->topo ? pilha->topo->valor : '\0';
}

bool temMaiorPrioridade(char atual, char topoPilha) {
    int prioridadeAtual, prioridadeTopo;

    switch (atual) {
        case '^': prioridadeAtual = 3; break;
        case '*': case '/': prioridadeAtual = 2; break;
        case '+': case '-': prioridadeAtual = 1; break;
        case '(': prioridadeAtual = 4; break;
        default: prioridadeAtual = 0;
    }

    switch (topoPilha) {
        case '^': prioridadeTopo = 3; break;
        case '*': case '/': prioridadeTopo = 2; break;
        case '+': case '-': prioridadeTopo = 1; break;
        case '(': prioridadeTopo = 0; break;
        default: prioridadeTopo = 0;
    }

    return prioridadeAtual > prioridadeTopo;
}
