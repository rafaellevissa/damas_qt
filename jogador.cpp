#include "jogador.h"

class Jogador
{
private:
    string Nome;
    int Cor;
    int QtdPecas;

public:
    string getNome() {
        return Nome;
    }
    void setNome(string nome) {
        Nome = nome;
    }
    int getCor() {
        return Cor;
    }
    void setCor(int cor) {
        Cor = cor;
    }
    int getQtdPecas() {
        return QtdPecas;
    }
    void setQtdPecas(int qtdPecas) {
        QtdPecas = qtdPecas;
    }
    void jogar(){

    }
}

