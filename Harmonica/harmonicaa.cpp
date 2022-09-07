#include <iostream>
    #include<iomanip>

    using namespace std;

    void harmo(int);

    int main(){
        int c;
        cin >> c;
        harmo(c);
    }
    void harmo(int c){
        float i=1, div, soma=0;
        for(i=1;i<=c;i++){
            div=(1/i);
            soma= soma+div;
        }
        cout << fixed << setprecision(8);
        cout << soma << endl;
    }