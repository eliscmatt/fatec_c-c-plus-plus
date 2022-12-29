#include <iostream>

using namespace std;

void hanoi(int n, char ori, char dest, char aux){
    if(n==1)
    {
        cout << "Mover disco 1 do pino " << ori << " para pino " << dest << endl;
        return;
    }
    hanoi(n-1, ori, aux, dest);
    cout << "Mover disco " << n << " do pino " << ori << " para pino " << dest << endl;
    hanoi(n-1, aux, dest, ori);
}

int main()
{
    int n;
    cin >> n;
    hanoi(n,'A','B','C');
    return 0;
}