#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double fatorial(int);

//double calculos cientificos onde margem de erro nao desprezivel, mas toleravel

int main(){ 
double n;
cin >> n;

for(int i=1; i<=n; i++){
		n += 1/fatorial(n);
	}
    cout <<setprecision(17);
	cout << "e = " << n << endl;
}

double fatorial(int n){ //funcao
    double fatorial = 1; //var
    for (int a = n; a<n; a++){
        fatorial *= n-a;
    }
    return fatorial;
}
