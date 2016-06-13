#include "tabuleiro.h"

class Tabuleiro
{
private:
    Casa oCasa [][];
public:
    Casa getoCasa(int l, int c) {
        return oCasa[l][c];
    }
    void setoCasa(Casa oCasa, int l, int c) {
        this.oCasa[l][c] = oCasa;
    }
    void criar(){
        oCasa = new Casa[8][8];
        cout<<("   1 2 3 4 5 6 7 8");
        for (int i=0;i<8;++i){//percorrendo linhas
            cout<<((i+1)<<" | | | | | | | | |");
            for (int j=0;j<8;++j){//percorrendo colunas
                oCasa[i][j]= new Casa();
                oCasa[i][j].setStatus(true);
                if ((i+j)%2==0){
                    oCasa[i][j].setCor("Preta");
                }else{
                    oCasa[i][j].setCor("Branca");
                }
            }
        }
    }
}

