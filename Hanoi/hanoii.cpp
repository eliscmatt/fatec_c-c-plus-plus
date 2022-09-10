#include <iostream>
#include <iomanip>

using namespace std;

void hanoi(int n,  char ori, char dest, int aux){
    if (1==n){
        cout << "Mover disco 1 do pino %c para pino %c" << endl, ori, dest;
        return;
    }
    cout << "Mover disco %d do pino %c para pino %c" << endl, n, ori, dest;
}


int main() {
    int n;
    cin >> n;

    hanoi('A', 'B', 'C', n); //tem que ser char para poder ser escrita
    return 0;
}

//se a função estiver já digitada no header, a assinatura entra no corpo, caso contrário, a função fica no corpo e a assinatura vai pro header



