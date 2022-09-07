#include <iostream>
using namespace std;

int main()
{
    int aux, x=0, div=0;

    cin >> x;
    for(aux=1 ; aux<=x ; aux++)
        if(x%aux==0)
            div++;

    if(div==2)
        cout<<"PRIMO"<<endl;
    else
        cout<<"!PRIMO"<<endl;
    return 0;
}