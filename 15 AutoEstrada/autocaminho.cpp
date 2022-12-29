#include <iostream> 
using namespace std;

int main (){
    int c, block=0,i;
    cin >> c;
    
    char caminho[c];
    i=0;
    
    while (i<c){
        cin >> caminho[i];
        if(caminho[i]=='P'){
            block = block + 2;
        }
        if(caminho[i]=='C'){
            block = block + 2;
        }
        if(caminho[i]=='A'){
            block = block + 1;
        }
        if(caminho[i]=='C'){
            block = block;
        }
        i++;
    }
        cout << block << endl;
}