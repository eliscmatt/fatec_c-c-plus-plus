#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int n;
    long double e = 0;
    cin >> n;

    for(int i=0;i<=n;i++){
        e +=1.0*1/fatorial(i);
    }
    cout << setprecision(17) << endl;
}

long double fatorial(int n){
    int fat = 1;
    for(int a = 0; a < n; a++){
        fat *= n-a;
    }
    return fat;
}




