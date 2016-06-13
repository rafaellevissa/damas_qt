#include "peca.h"

class Peca
{
private:
    string Cor;
    int Posicao[];

public:
    string getCor() {
        return Cor;
    }
    void setCor(string cor) {
        Cor = cor;
    }
    int getPosicao(int x) {
        return Posicao[x]; //x=Posicao[1] e y=Posicao[2]
    }
    void setPosicao(int x, int y) {
        Posicao[1]= x;
        Posicao[2]= y;
    }
    void mover(){

    }
}

