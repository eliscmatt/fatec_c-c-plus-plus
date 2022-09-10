//pt 3.33

#include <iostream>
#include <stdio.h>

using namespace std;

void derivada(double* vetor, int grau);
int main(){
	int grau, i, k;
    cin >> grau;
	
	k=grau;
	double vetor[k+1];
	
	for(i=0;i<=grau;i++){
        cin >> vetor[i];

	}
	
	derivada(vetor, grau);
	
	for(i=0;i<=grau;i++){
		k--;
		cout << vetor[i] << endl;
		if(k!=0 && k!=1){
            cout << "x^k" << endl;
		}else if(k==1){
            cout << "x+" <<endl;
		}else {
			break;
		}
	}
	
	return 0;
}
void derivada(double* vetor, int grau){
	int i, k;
	k=grau;
	for(i=0;i<=grau;i++){
		
		vetor[i]=vetor[i]*k;
		k--;
		
	}
	return;	
}