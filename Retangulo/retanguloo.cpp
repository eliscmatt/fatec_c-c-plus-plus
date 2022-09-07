#include <iostream>
#include<stdio.h>

using namespace std;

void dentro_ret(int, int, int, int, int, int, int*);

int main(){
	
	int a0, b0, a1, b1, a, b, res;

    cin >> a0 >> b0 >> a1 >> b1 >> a >> b;
	
	dentro_ret(a0, b0, a1, b1, a, b, &res);
	
	if(res==1){
        cout << "INTERNO" << endl;
	}else{
		cout << "EXTERNO" << endl;
	}
	return 0;
}

void dentro_ret(int a0, int b0, int a1, int b1, int a, int b, int *res){
	
	if(a0<a1){
		if(a>=a0 && a<=a1 && b>=b0 && b<=b1){
			*res=1;
		}else{
			*res=0;
		}
	}else if(a1<a0){
		if(a>=a1 && a<=a0 && b>=b0 && b<=b1){
			*res=1;
		}else{
			*res=0;
		}
	}
}