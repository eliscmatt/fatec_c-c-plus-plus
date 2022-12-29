#include <bits/stdc++.h>
using namespace std;
int B;

int main(){
    while (cin >> B){
        int dep = 2;
        int ant = 1;
        while (dep != 1){
            if (dep <= B / 2) dep += dep;
            else dep -= (B - dep + 1);
            ++ant;
        }
        cout << ant << endl;
        return 0;
    }
}