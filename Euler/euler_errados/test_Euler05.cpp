#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>

using namespace std;

double fatorial(int);

int main() {
int n;
double sum=0;
cin >> n;

for (int i=0; i<=n; i++){
    sum += 1.0*1/fatorial(i);
    return 0;
}
cout << setprecision(17);
cout << sum << endl;
}

double fatorial(int n){
    int fatorial = 1;
    for (int a = 0; a<n; a++){
        fatorial *= n-a;
    }
    return fatorial;
}