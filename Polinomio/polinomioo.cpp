#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

double poli(double *vet, int grau, double x);
int main(){
	
	int grau, i;
	double x;
	cin >> grau >> x;
	double vet[grau+1], resultado;
	
	for(i=0;i<=grau;i++){
		cin >> vet[i];
	}
	
	resultado=poli(vet, grau, x);
	
	cout << fixed << setprecision(2) << resultado << endl;
	
	return 0;
}
double poli(double *vet, int grau, double x){
	double resultado=0;
	int i, k=grau;
	for(i=0;i<=grau;i++){
		resultado=resultado+(vet[i])*pow(x, k);
		k--;
	} //número guardado no vetor, vezes x elevado a k, subtraindo 1 a cada volta no laço.
	return resultado;
}