#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int fatorial(int);

int main(){
	int n;
	cin >> n;
	
	double sum = 0;
	
	for(int i=0; i<=n; i++){
		sum += 1.0*1/fatorial(i);
	}
	cout <<setprecision(17);
	cout << "n é " << sum << endl;
}

int fatorial(int n){
	int fatorial = 1;
	for(int e=0; e<n; e++){
		fatorial *= n-e;
	}
return fatorial;
}
