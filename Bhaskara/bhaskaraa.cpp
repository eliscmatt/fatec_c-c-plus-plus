#include<iostream>
    #include<math.h>
    #include<iomanip>

    using namespace std;

    void raiz(float,float,float);

    int main(){
        float a, b, c;
        cin >> a >> b >> c ;


        raiz(a,b,c);
        return 0;
    }
    void raiz(float a ,float b ,float c){
        float r1=0, r2=0, delta;

        delta = b*b-(4*a*c);

        if(a==0){
            cout << "NARN" << endl;
        }
        else if(delta < 0){
            cout << "NARN" << endl;
        }
        else{
            r1 = ((-b)+sqrt(delta))/(2*a);
            r2 = ((-b)-sqrt(delta))/(2*a);
            cout << fixed << setprecision(2);
            cout << r1 <<"\t"<< r2 << endl;
        }
    }