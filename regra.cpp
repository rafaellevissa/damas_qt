#include "regra.h"

class Regra
{
private:
    Jogada oJogada;

public:
    Jogada getoJogada() {
        return oJogada;
    }

    void setoJogada(Jogada oJogada) {
        this.oJogada = oJogada;
    }
}

