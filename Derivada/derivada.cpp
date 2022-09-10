#include <iostream>
using namespace std;
void deriv(double vetor, int grau) {
    if (grau>2){
        cout << grau*vetor << "x^" << grau - 1 << "+";
    }
    else if (grau==2) {
        cout << grau * vetor << "x" <<"+";
    } else cout << (grau * vetor);
};

int main() {
    int grau, i=0, g=0;
    cin >> grau;
    if (grau>0 && grau<=100) {
        int aux = grau;
        double vetores[101];
        while (g <= (grau)) {
            cin >> vetores[i];
            g++, i++;
        }
        for (i=0; i<aux; i++) {
            deriv(vetores[i], grau);
            grau--;
        }
    }
}