#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double fatorialEuler(double);
double euler(int);

int main(){
    int n;
    cin >> n;

    cout << setprecision(17);
    cout << euler(n) << endl;
    return 0;
}

double fatorialEuler (int n) {
    if (n == 1) return 1;
    else return(1/fatorialEuler(n) + euler(n-1));
    }

double euler(int n){
    if(n == 0) return 1;
    else return(1/fatorialEuler(n) + euler(n-1));
}