//pt 8.0

#include<iostream>
    #include<math.h>

    using namespace std;

    int main (){
        int x, ultimo=1, penultimo=1,cont=0,termo=0;
        cin >> x;

    if(x==0 || x>10000){
        cout << "NARN" << endl;
    }
    else if(x==1 || x==2){
        cout << ultimo << endl;
    }
    else {
        cont = 2;
        while ( cont < x ){
            termo = ultimo + penultimo;
            penultimo = ultimo;
            ultimo = termo;
            cont+=1;
        }
    cout << termo << endl;
    }

}