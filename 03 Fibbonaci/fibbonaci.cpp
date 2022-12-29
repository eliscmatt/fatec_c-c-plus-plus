#include <iostream>

using namespace std;

void fibonacci(unsigned long long int, unsigned long long int *);
int main(){
	unsigned long long int n, res=1;
	
	cin >> n;
	fibonacci(n, &res);
	cout << res;
	
}
void fibonacci(unsigned long long int n, unsigned long long int *res) {
    unsigned long long int ant = 1, temp, i;
 
    if(n == 1) {
        *res=1;
    } else if(n == 2) {
        *res=1;
    }else if(n == 0) {
        *res=0;
    } else {
        for(i = 3; i <= n; i++) {
            temp = *res;
            *res = ant + (*res);
            ant = temp;
        }
    }
}