#include "jogada.h"

class Jogada
{
private:
    int Status;
    bool Turno;
    Jogador oJogador;
public:
    int getStatus() {
        return Status;
    }
    void setStatus(int status) {
        Status = status;
    }
    boolean isTurno() {
        return Turno;
    }
    void setTurno(bool turno) {
        Turno = turno;
    }
    Jogador getoJogador() {
        return oJogador;
    }
    void setoJogador(Jogador oJogador) {
        this.oJogador = oJogador;
    }
}

