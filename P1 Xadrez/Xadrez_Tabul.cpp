#include <iostream>

using namespace std;

int main(){
    int N, G, n=0;
    cin >> N;
    cin >> G;
    n=8*N;

    cout << "P2" << endl;
    cout << n << "\t" << n << "\t" << endl << G << endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if((i/N)%2==0){
                if((j/N)%2==0){
                    cout << G << "\t"; 
                }
                else{
                    cout << "0" << "\t";
                }
            }
            else{
                if((j/N)%2==0){
                    cout << "0" << "\t";
                }
                else{
                    cout << G << "\t"; 
                }
            }
        }    
        cout << endl;
    }
    return 0;
}