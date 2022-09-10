#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

    double fatorial(int n){
        if(n==1) return 1;
        else return n * fatorial(n-1);
        }

    double euler(int n){
        if(n == 0) return 1;
        else return(1/fatorial(n) + euler(n-1));
    }

    int main(){
        int n;
        double e;

        cin >> n;

        e = euler(n);
        cout << setprecision(17) << e << endl;

        return 0;
    }
