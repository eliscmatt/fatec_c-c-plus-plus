#include <iostream>
using namespace std;
int main() {
    int N, G;
    cin >> N >> G;

    int tabuleiro[N*8][N*8]; //larguraXaltura
        if ((N>0 && N<21) && (G>0 && G<21)) {
        cout << "P2" << "\n" << N*8 << "\t" << N*8 << "\n" << G << endl;

        for(int i=0;i<N*8;i++){
            for(int j=0; j<N*8;j++){
                if((i / N) % 2 == 0){
                    if ((j / N) % 2 == 0) {
                        tabuleiro[i][j] = G;
                    }else{
                        tabuleiro[i][j] = 0;
                    }
                }else{
                    if((j / N) % 2 == 0){
                        tabuleiro[i][j] = 0;
                    }else{tabuleiro[i][j] = G;
                }
            }
            cout << tabuleiro[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
}