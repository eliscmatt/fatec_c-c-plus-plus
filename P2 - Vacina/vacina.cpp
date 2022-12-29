
#include <iostream>
    using namespace std;
#include <string>
    using std::string;

int main(){
    string a, b, c, a1, b1, c1;
    cin >> a >> b >> c;

    int n;
    cin >> n;

    int qt, q = 0;
    qt = a.length();

    string save;

    for(int i = 0;i+n <= qt; i++){
        string number;
        int cont = 0;

        for(int o = i; o < i+n; o++){
            if(a[o] == c[o]){
                cont++;
                number += a[o];
            }
        }
        if(cont == n){
            if(save.length() == 0){
                save += number;
                q++;
            }else{
                int coux = 0, vz = 0, tv = save.length();
                for(int k = 0; k < tv; k++){
                    if(((int)save[k]) == ((int)number[coux])){
                        vz++;
                    }
                    if(coux == n-1){
                        coux = -1;
                        if(vz == n){
                            break;
                        }
                        vz = 0;
                    }
                    if(k+1 >= tv){
                        save+=number;
                        q++;
                        break;
                    }
                    coux++;
                }
            }
        }
    }
    cout << q << endl;
    return 0;
}
