#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int x, m, i, final;
    cin >> x >> m;
	//x inicio dia
	//m fim dia
	//i intervalo, i<=30, dias sem pedidos

	for(i=0;i<=30;i++){

		if(x%m==0){
			final = 1;
		} //true, MONSTOP

		else{
		x = x+(x%m);
		final = 0;
		} //false, STOP
		
	}

	if(final==0){
			cout << "NONSTOP" << endl;
		}
		else{
			cout << "STOP" << endl;
		}	
}